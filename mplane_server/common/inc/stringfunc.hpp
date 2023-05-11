#ifndef _COMMON_STRINGFUNC_HPP_
#define _COMMON_STRINGFUNC_HPP_

/*!
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * \file      stringfunc.hpp
 * \brief     A collection of string helper functions used to manipulate the
 * contents of std::string
 *
 *
 * \details   A collection of string helper functions used to manipulate the
 * contents of std::string
 *
 */

#include <string.h>

#include <cctype>
#include <iomanip>
#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

// Use optimised string functions
#define STR_OPT

/**
 * Remove all spaces from string
 * @param str
 * @return copy of str with *all* spaces removed
 */
inline std::string
removeSpaces(const std::string& str) {
  std::string result;
  std::string::const_iterator iter;

  for (iter = str.begin(); iter != str.end(); ++iter) {
    char ch = *iter;

    if (ch != ' ') {
      result += ch;
    }
  }
  return result;
}

#ifdef STR_OPT
/**
 * Convert string to lowercase
 * @param str
 * @return copy of str with all chars converted to lowercase
 */
inline std::string
toLower(const std::string& str) {
  if (str.empty())
    return str;

  char strcopy[str.size() + 1];
  char* p(strcopy);

  const char* cp(str.c_str());
  while (*cp) {
    if (*cp >= 'A' && *cp <= 'Z') {
      *p++ = *cp++ | 0x20;
    } else {
      *p++ = *cp++;
    }
  }
  *p = '\0';
  return std::string(strcopy);
}

/**
 * Convert string to uppercase
 * @param str
 * @return copy of str with all chars converted to uppercase
 */
inline std::string
toUpper(const std::string& str) {
  if (str.empty())
    return str;

  char strcopy[str.size() + 1];
  char* p(strcopy);

  const char* cp(str.c_str());
  while (*cp) {
    if (*cp >= 'a' && *cp <= 'z') {
      *p++ = *cp++ & ~0x20;
    } else {
      *p++ = *cp++;
    }
  }
  *p = '\0';
  return std::string(strcopy);
}

/**
 * Convert the string so that the first char is uppercase and all other chars
 * are lowercase
 * @param str
 * @return capitalised string
 */
inline std::string
toInitialCapital(const std::string& str) {
  if (str.empty())
    return str;

  char strcopy[str.size() + 1];
  char* p(strcopy);

  const char* cp(str.c_str());

  if (*cp >= 'a' && *cp <= 'z') {
    *p++ = *cp++ & ~0x20;
  } else {
    *p++ = *cp++;
  }

  while (*cp) {
    if (*cp >= 'A' && *cp <= 'Z') {
      *p++ = *cp++ | 0x20;
    } else {
      *p++ = *cp++;
    }
  }
  *p = '\0';
  return std::string(strcopy);
}
#else
/**
 * Convert string to lowercase
 * @param str
 * @return copy of str with all chars converted to lowercase
 */
inline std::string
toLower(const std::string& str) {
  std::string result;
  std::string::const_iterator iter;

  for (iter = str.begin(); iter != str.end(); ++iter) {
    char ch = *iter;
    result += tolower(ch);
  }
  return result;
}

/**
 * Convert string to uppercase
 * @param str
 * @return copy of str with all chars converted to uppercase
 */
inline std::string
toUpper(const std::string& str) {
  std::string result;
  std::string::const_iterator iter;

  for (iter = str.begin(); iter != str.end(); ++iter) {
    char ch = *iter;
    result += toupper(ch);
  }
  return result;
}

/**
 * Convert the string so that the first char is uppercase and all other chars
 * are lowercase
 * @param str
 * @return capitalised string
 */
inline std::string
toInitialCapital(const std::string& str) {
  std::string result;
  std::string::const_iterator iter;

  for (iter = str.begin(); iter != str.end(); ++iter) {
    char ch = *iter;
    if (iter == str.begin())
      result += toupper(ch);
    else
      result += tolower(ch);
  }
  return result;
}

#endif

/**
 * Does str1 start with str2
 * @param str1
 * @param str2
 * @return true if str1 starts with str2
 */
inline bool
startsWith(const std::string& str1, const std::string& str2) {
  if (str1.length() < str2.length()) {
    return false;
  }

  if (str1.compare(0, str2.length(), str2) == 0) {
    return true;
  }
  return false;
}

/**
 * Does str1 start with str2
 * @param str1
 * @param str2
 * @return true if str1 starts with str2
 */
inline bool
endsWith(const std::string& str1, const std::string& str2) {
  if (str1.length() < str2.length()) {
    return false;
  }

  if (str1.compare(str1.length() - str2.length(), str2.length(), str2) == 0) {
    return true;
  }
  return false;
}

/**
 * Return the rest of the string from original that follows the string in substr
 * @param original
 * @param substr
 * @return string section that follows substr
 */
inline std::string
follows(const std::string& original, const std::string& substr) {
  if (original.empty())
    return original;

  int pos = original.find(substr);
  pos += substr.length();
  return original.substr(pos);
}

/**
 * Trim the specified chars from the right of the original string. Default is to
 * trim space.
 * @param source
 * @param t    Trim character set
 * @return trimmed string
 */
inline std::string
trim_right(const std::string& source, const std::string& t = " ") {
  std::string str = source;

  std::size_t found = str.find_last_not_of(t);
  if (found != std::string::npos)
    str.erase(found + 1);
  else
    str.clear(); // str is all removable chars

  return str;
}

/**
 * Trim the specified chars from the left of the original string. Default is to
 * trim space.
 * @param source
 * @param t    Trim character set
 * @return trimmed string
 */
inline std::string
trim_left(const std::string& source, const std::string& t = " ") {
  std::string str = source;
  return str.erase(0, source.find_first_not_of(t));

  std::size_t found = str.find_first_not_of(t);
  if (found != std::string::npos)
    str.erase(0, found);
  else
    str.clear(); // str is all removable chars

  return str;
}

/**
 * Trim characters from both ends of the string
 * @param source
 * @param t    Trim character set
 * @return trimmed string
 */
inline std::string
trim(const std::string& source, const std::string& t = " ") {
  std::string str = source;
  return trim_left(trim_right(str, t), t);
}

/**
 * Trim float string removing any excess '0' following the '.'.
 * @param source float string
 * @return trimmed string
 */
inline std::string
trim_float(const std::string& source) {
  std::string str = source;

  std::size_t dp = str.find_last_of('.');
  if (dp == std::string::npos)
    return str;

  if (dp < str.size() - 1) {
    std::string fraction(str.substr(dp + 1));
    str.erase(dp);
    std::size_t found = fraction.find_last_not_of('0');
    if (found != std::string::npos) {
      fraction.erase(found + 1);
      str.append(".");
      str.append(fraction);
    }
  }

  // is decimal point now at the end of the string, if so remove it
  if (str.back() == '.')
    str.pop_back();

  return str;
}

/**
 * Replace any characters in a string that are also in charsToReplace with the
 * specified replacement character
 * @param str
 * @param charsToReplace
 * @param replacement
 * @return new string with characters replaced
 */
inline std::string
replaceChars(
    const std::string& str,
    const std::string& charsToReplace,
    char replacement) {
  std::string result(str);
  std::size_t pos(result.find_first_of(charsToReplace));
  while (pos != std::string::npos) {
    result[pos] = replacement;
    pos = result.find_first_of(charsToReplace, pos + 1);
  }
  return result;
}

/**
 * Remove all characters of the given type from string
 * @param str
 * @return copy of str with *all* characters of the given type removed
 */
inline std::string
removeChars(const std::string& str, char toRemove) {
  std::string result;
  std::string::const_iterator iter;

  for (iter = str.begin(); iter != str.end(); ++iter) {
    char ch = *iter;

    if (ch != toRemove) {
      result += ch;
    }
  }
  return result;
}

/**
 * Replace any substring in a string  with the specified replacement string
 * @param str
 * @param strToReplace
 * @param replacement
 * @return new string with characters replaced
 */
inline std::string
replaceStrs(
    const std::string& str,
    const std::string& strToReplace,
    const std::string& replacement) {
  std::string result(str);
  std::size_t strlen(strToReplace.size());
  std::size_t replacelen(replacement.size());
  std::size_t pos(result.find(strToReplace));
  while (pos != std::string::npos) {
    result.replace(pos, strlen, replacement);
    pos = result.find(strToReplace, pos + replacelen);
  }
  return result;
}

/**
 * Aligns the string to the left of the fixed width space (width given by
 * padWidth), adding as many padChar chars to the right to make a string of the
 * correct length
 * @param str
 * @param padWidth
 * @param padChar
 * @return padded string
 */
inline std::string
padLeft(const std::string& str, unsigned padWidth, char padChar = ' ') {
  unsigned len(str.length());
  if (len >= padWidth)
    return str;

  std::string padding(padWidth, padChar);

  std::stringstream ss;
  ss << str << padding.substr(0, padWidth - len);
  return ss.str();
}

/**
 * Aligns the string to the right of the fixed width space (width given by
 * padWidth), adding as many padChar chars to the right to make a string of the
 * correct length
 * @param str
 * @param padWidth
 * @param padChar
 * @return padded string
 */
inline std::string
padRight(const std::string& str, unsigned padWidth, char padChar = ' ') {
  unsigned len(str.length());
  if (len >= padWidth)
    return str;

  std::string padding(padWidth, padChar);

  std::stringstream ss;
  ss << padding.substr(0, padWidth - len) << str;
  return ss.str();
}

/**
 * Finds the longest string sequence that both strings have in common starting
 * with (and including) the first char of each string
 * @param lhs
 * @param rhs
 * @return longest common string prefix
 */
inline std::string
longestCommonPrefix(const std::string& lhs, const std::string& rhs) {
  if (lhs.empty())
    return "";

  if (rhs.empty())
    return "";

  // Make LHS the longest
  unsigned lhsLen(lhs.length());
  unsigned rhsLen(rhs.length());
  const std::string* str1(&lhs);
  const std::string* str2(&rhs);
  if (lhsLen < rhsLen) {
    str1 = &rhs;
    str2 = &lhs;
    std::swap(rhsLen, lhsLen);
  }

  // Compare the 2 strings
  unsigned index(0);
  for (char cc : *str1) {
    if (index == rhsLen)
      break;

    if (cc != (*str2)[index])
      break;

    ++index;
  }

  return str1->substr(0, index);
}

/**
 * Finds the longest string sequence in a vector of strings
 * @param strings
 * @return longest common string prefix
 */
inline std::string
longestCommonPrefix(const std::vector<std::string>& strings) {
  if (strings.empty())
    return "";

  if (strings.size() == 1)
    return strings[0];

  std::string prefix(strings[0]);
  for (auto str : strings) {
    prefix = longestCommonPrefix(str, prefix);
    if (prefix.empty())
      return prefix;
  }
  return prefix;
}

/**
 * Given a string (and an optional start position) scans past any preceding
 * whitespace then converts the next characters into an integer and returns the
 * value. Sets 'ok' to true if conversion is successful; false otherwise
 */
inline int
extractInt(const std::string& string, bool& ok, std::size_t pos = 0) {
  std::string digits{"0123456789"};
  std::string intStart{digits + "-"};

  ok = false;
  std::size_t start(string.find_first_of(intStart, pos));
  if (start == std::string::npos)
    return 0;

  std::size_t end(string.find_first_not_of(digits, start + 1));
  if (end == std::string::npos)
    end = string.size();

  std::string istr(string.substr(start, end - start));
  if (istr[0] == '-' && istr.size() == 1)
    return 0;

  int ival(static_cast<int>(strtol(istr.c_str(), nullptr, 10)));
  ok = true;
  return ival;
}

/**
 * Given a string (and an optional start position) scans past any preceding
 * whitespace then converts the next characters into an unsigned integer and
 * returns the value. Sets 'ok' to true if conversion is successful; false
 * otherwise
 */
inline unsigned
extractUnsigned(const std::string& string, bool& ok, std::size_t pos = 0) {
  std::string digits{"0123456789"};

  ok = false;
  std::size_t start(string.find_first_of(digits, pos));
  if (start == std::string::npos)
    return 0;

  std::size_t end(string.find_first_not_of(digits, start + 1));
  if (end == std::string::npos)
    end = string.size();

  std::string ustr(string.substr(start, end - start));
  unsigned uval(static_cast<unsigned>(strtoul(ustr.c_str(), nullptr, 10)));
  ok = true;
  return uval;
}

/**
 * Thread-safe version of strError which returns a std::string containing the
 * error string
 * @param error
 * @return
 */
inline std::string
strError(int error) {
  char buff[256];
  if (::strerror_r(error, buff, sizeof(buff)) != 0)
    return "Unknown error";

  return std::string(buff);
}

/**
 * Split a string at the specified delimiter char. Returns a vector of the
 * results
 * @param str
 * @param delimiter
 * @return vector of strings
 */
inline std::vector<std::string>
splitStr(const std::string& str, char delimiter) {
  std::vector<std::string> results;
  std::stringstream ss(str);
  std::string item;
  while (std::getline(ss, item, delimiter)) {
    results.push_back(item);
  }
  return results;
}

/**
 * Split a string at the specified delimiter char. Returns a vector of the
 * results
 * @param str
 * @param delimiters
 * @return vector of strings
 */
inline std::vector<std::string>
splitStr(const std::string& str, const std::string& delimiters = " \t") {
  std::vector<std::string> results;
  std::size_t startPos(str.find_first_not_of(delimiters, 0));
  std::size_t endPos(str.find_first_of(delimiters, startPos));

  while (endPos != std::string::npos) {
    results.push_back(str.substr(startPos, endPos - startPos));
    startPos = str.find_first_not_of(delimiters, endPos + 1);
    endPos = str.find_first_of(delimiters, startPos);
  }

  if (startPos != std::string::npos)
    results.push_back(str.substr(startPos));

  return results;
}

/**
 * Takes a string of the form:
 *         var1=val1 var2=val2 var3=val3 ...
 * And converts it into a map of variable/value pairs
 * @param str
 * @param delimiters    Separator char(s) between var/value pairs
 * @param equals        Separator between variable and value
 * @return map of variable/value pairs
 */
inline std::map<std::string, std::string>
varVals(
    const std::string& str,
    const std::string& delimiters = " \t",
    const std::string& equals = "=") {
  std::map<std::string, std::string> vars;
  if (str.empty())
    return vars;

  if (str.find_first_of(equals) == std::string::npos)
    return vars;

  // split strings into var/val pairs
  std::vector<std::string> pairs(splitStr(str, delimiters));
  for (auto pair : pairs) {
    std::string var(pair);
    std::string val("");

    std::size_t varEnd(pair.find_first_of(equals));
    std::size_t valStart(pair.find_first_not_of(equals, varEnd));

    if (varEnd != std::string::npos)
      var = pair.substr(0, varEnd);

    if (valStart != std::string::npos)
      val = pair.substr(valStart);

    vars[var] = val;
  }

  return vars;
}

/**
 * Expands any variables within the string, replacing the variable name with
 * it's value. If the variable is not set then the variable is replaced with an
 * empty string.
 *
 * Variable is defined in the format ${NAME} where 'NAME' is the variable name.
 *
 * Expects a string of the form:
 *         var1=${VAR1} var2=${VAR2} var3=val3 ...
 *
 * @param str
 * @param vars        Map of variable/value pairs
 * @return expanded string
 */
inline std::string
expandStr(
    const std::string& str, const std::map<std::string, std::string>& vars) {
  if (str.empty())
    return "";

  if (str.find_first_of('$') == std::string::npos)
    return str;

  std::string expanded;
  std::size_t prevPos(0);
  std::size_t pos(str.find_first_of('$'));
  while (pos != std::string::npos) {
    expanded += str.substr(prevPos, pos - prevPos);
    prevPos = pos++;

    // check we have enough string left
    if (pos + 2 >= str.size())
      break;

    if (str.at(pos) != '{') {
      // not a valid variable so just copy string
      pos = str.find_first_of('$', pos);
      continue;
    }

    // find end of variable definition
    std::size_t epos(str.find_first_of('}', pos));
    if (epos == std::string::npos)
      continue;

    ++pos;
    std::string var(str.substr(pos, epos - pos));
    prevPos = epos + 1;

    auto entry(vars.find(var));
    if (entry != vars.end()) {
      expanded += entry->second;
    }

    pos = str.find_first_of('$', epos);
  }

  if (prevPos != std::string::npos)
    expanded += str.substr(prevPos);

  return expanded;
}

/**
 * Convert a MAC id into a formatted string
 */
inline std::string
macToStr(uint64_t macid) {
  std::stringstream ss;
  for (unsigned i = 0; i < 6; i++) {
    uint64_t byte((macid >> 8 * (6 - i - 1)) & 0xff);
    if (i > 0)
      ss << ":";
    ss << std::hex << std::uppercase << std::setw(2) << std::setfill('0')
       << byte;
  }

  return ss.str();
}

/**
 * Convert a formatted string into a MAC id
 * Expect string to be of the form XX:XX:XX:XX:XX:XX
 */
inline uint64_t
strToMac(const std::string& _macstr) {
  const std::string valid("0123456789ABCDEF");

  if (_macstr.size() != (6 * 3 - 1))
    return 0;

  std::string macstr(toUpper(_macstr));
  uint64_t macid(0);
  for (unsigned i = 0; i < 6; i++) {
    // invalid separator
    if ((i > 0) && (macstr.at(3 * i - 1) != ':'))
      return 0;

    // invalid digits
    if (valid.find(macstr.at(3 * i)) == std::string::npos)
      return 0;
    if (valid.find(macstr.at(3 * i + 1)) == std::string::npos)
      return 0;

    int byte(std::stoi(macstr.substr(3 * i, 2), nullptr, 16));
    if (byte < 0)
      return 0;

    macid += (uint64_t)byte << 8 * (6 - i - 1);
  }
  return macid;
}

/**
 * Convert a char* into a string. Returns empty string if NULL pointer
 */
inline std::string
charpToString(const char* cp) {
  if (!cp)
    return "";

  return std::string(cp);
}

/**
 * Convert a hex string to std::string
 *  For example : Given 6176656e67657273 should output avengers
 */
inline std::string
convertHexToString(std::string hexStr) {
  std::string ascii = "";

  for (size_t index = 0; index < hexStr.length(); index += 2) {
    // taking two characters from hex string
    std::string part = hexStr.substr(index, 2);
    // changing it into base 16
    char ch = std::stoul(part, nullptr, 16);
    // putting it into the ASCII string
    ascii += ch;
  }
  return ascii;
}

#endif /* _STRINGFUNC_HPP_ */
