unsigned int *__fastcall sub_343780(
        unsigned int *a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        int a6,
        char *dest,
        size_t n,
        unsigned int *a9)
{
  size_t v9; // r3
  unsigned int v10; // r0
  size_t v13; // [sp+8h] [bp-Ch]
  unsigned int varg_r3a; // [sp+24h] [bp+10h]
  const void *varg_r3b; // [sp+24h] [bp+10h]
  char *desta; // [sp+30h] [bp+1Ch]
  size_t na; // [sp+34h] [bp+20h]

  v9 = a3 - a4 - a6;
  if ( n < v9 )
    v9 = n;
  v13 = v9;
  desta = sub_3425C4(dest, (const void *)(a4 + a6), v9);
  na = n - v13;
  varg_r3a = sub_342508(a2, a4 + v13, a3);
  if ( na )
  {
    varg_r3b = (const void *)sub_342508(a2, varg_r3a + a6, a3);
    memcpy(desta, varg_r3b, na);
    v10 = sub_342508(a2, (unsigned int)varg_r3b + na, a3);
    varg_r3a = sub_342564(a2, v10 - a6, a3);
  }
  *a9 = varg_r3a;
  *a1 = a2;
  a1[1] = a3;
  a1[2] = varg_r3a;
  a1[3] = a5;
  a1[4] = a6;
  return a1;
}
