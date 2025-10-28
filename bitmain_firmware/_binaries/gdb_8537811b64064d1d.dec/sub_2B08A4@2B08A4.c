int __fastcall sub_2B08A4(int a1, int a2, int a3, int a4)
{
  char v7[40]; // [sp+0h] [bp-28h] BYREF

  if ( a3 == -1 )
    return sub_2B0894(a4);
  if ( (word_4388C0[(unsigned __int8)a3] & 0x10) != 0 )
  {
    v7[0] = a3;
    v7[1] = 0;
  }
  else
  {
    sprintf(v7, "\\%03o", (unsigned __int8)a3);
  }
  sub_2A6A84("%B:%d: Unexpected character `%s' in S-record file\n", a1, a2, v7);
  return ((int (__fastcall *)(int))loc_2A6C70)(17);
}
