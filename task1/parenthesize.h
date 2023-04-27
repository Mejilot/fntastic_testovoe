#include <iostream>
#include <locale>
#include <codecvt>
#include <string>
#include <cwctype>
#include <unordered_map>

void Parenthesize(std::string &in) {
    std::unordered_map<char16_t, int> unq;
    std::wstring_convert<std::codecvt_utf8_utf16<char16_t>, char16_t> convert;
    std::u16string tmp = convert.from_bytes(in);
    for (auto it : tmp) {
        char16_t t = std::towlower(it);
        if (unq.contains(t))
            ++unq[t];
        else
            unq.insert({t, 1});
    }
    
    in.clear();
    for (size_t i = 0; i < tmp.size(); ++i) {
        if (unq[std::towlower(tmp[i])] > 1)
            in += ')';
        else
            in += '(';
    }
}
