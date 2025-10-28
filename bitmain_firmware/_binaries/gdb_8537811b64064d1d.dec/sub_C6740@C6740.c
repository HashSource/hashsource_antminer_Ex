int sub_C6740()
{
  sub_D23FC();
  memcpy(&unk_478300, &unk_47840C, 0x48u);
  dword_478304 = (int)sub_C5D9C;
  dword_478324 = (int)sub_C5ABC;
  dword_47832C = (int)sub_C5A38;
  dword_478330 = (int)sub_C598C;
  dword_478328 = (int)sub_C5D4C;
  dword_478314 = (int)sub_C647C;
  dword_478320 = (int)sub_C5C40;
  sub_D21EC("catch", "Catch an exception, when caught.", sub_C6450, 0, 0, 1);
  sub_D21EC("throw", "Catch an exception, when thrown.", sub_C6424, 0, 0, 1);
  sub_D21EC("rethrow", "Catch an exception, when rethrown.", sub_C63F8, 0, 0, 1);
  return sub_26CBB8("_exception", &off_37D53C, 0);
}
