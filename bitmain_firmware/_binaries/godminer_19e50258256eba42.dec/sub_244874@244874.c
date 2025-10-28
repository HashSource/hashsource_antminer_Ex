unsigned int __fastcall sub_244874(int a1, int a2, int a3, int a4, int a5, unsigned int a6)
{
  unsigned int v8; // [sp+1Ch] [bp-8h]

  v8 = (unsigned int)(a3 * (a4 + 1)) >> 5;
  if ( v8 > a6 )
    return -1;
  if ( a5 )
    sub_244500(a1 + a2, a3, a5, v8, a4 + 1, 4 - ((unsigned int)(a4 + 8) >> 3));
  return v8;
}
