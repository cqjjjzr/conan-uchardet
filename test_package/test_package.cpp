#include <iostream>

#include <uchardet.h>

int main()
{
    uchardet_t uc = uchardet_new();
    char teststr[] = "\xe6\xb5\x8b\xe8\xaf\x95";
    uchardet_handle_data(uc, teststr, sizeof(teststr));
    uchardet_data_end(uc);

    const char *result = uchardet_get_charset(uc);
    std::cout << "Test result(expect UTF-8): " << result << std::endl;
    return 0;
}
