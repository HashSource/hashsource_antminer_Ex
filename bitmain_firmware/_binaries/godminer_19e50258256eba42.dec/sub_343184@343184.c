unsigned int __fastcall sub_343184(int a1, unsigned int a2, unsigned int a3, char *a4, int a5, char *a6, size_t a7)
{
  size_t v7; // r3
  char *v8; // r0
  unsigned int result; // r0
  size_t v10; // [sp+Ch] [bp-8h]
  char *varg_r3; // [sp+24h] [bp+10h]
  unsigned int varg_r3a; // [sp+24h] [bp+10h]

  varg_r3 = a4;
  if ( !sub_342424(a1, a2, a3, (unsigned int)a4) )
  {
    v7 = a7;
    if ( a7 >= a2 - (unsigned int)varg_r3 )
      v7 = a2 - (_DWORD)varg_r3;
    v10 = v7;
    varg_r3 = sub_3425C4(varg_r3, a6, v7);
    a6 += v10;
    a7 -= v10;
  }
  if ( a7 )
  {
    v8 = (char *)sub_342508(a1, (unsigned int)varg_r3, a2);
    varg_r3 = sub_3425C4(v8, a6, a7);
  }
  result = sub_342508(a1, (unsigned int)varg_r3, a2);
  varg_r3a = result;
  return result;
}
