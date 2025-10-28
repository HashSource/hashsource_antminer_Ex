int __fastcall sub_1BF85C(int a1, int a2, int a3)
{
  int result; // r0
  int v5; // [sp+4h] [bp-4h] BYREF

  v5 = 0;
  result = sub_1BF760(a1, a3, &v5);
  if ( v5 )
    return sub_25A6E4(&word_3DB438, a3);
  return result;
}
