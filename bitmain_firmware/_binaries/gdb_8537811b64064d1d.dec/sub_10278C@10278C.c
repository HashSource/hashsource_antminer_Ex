int __fastcall sub_10278C(int a1, int a2)
{
  FILE **v3; // r4

  v3 = (FILE **)(a1 + 4);
  sub_102734((FILE **)(a1 + 4), (const char *)&word_356660);
  return sub_102734(
           v3,
           "event {\n\tname = \"register\";\n\tid = %u;\n\tfields := struct { \n\t\tascii contents[%d];\n\t};\n};\n",
           0,
           a2);
}
