int __fastcall sub_1C993C(const char *a1, int a2)
{
  void *ptr; // [sp+4h] [bp-38h] BYREF
  char v6; // [sp+Ch] [bp-30h] BYREF
  int (**v7)(); // [sp+1Ch] [bp-20h] BYREF
  char *s; // [sp+20h] [bp-1Ch]
  int v9; // [sp+24h] [bp-18h]
  char v10; // [sp+28h] [bp-14h] BYREF

  sub_256788(&v7);
  s = &v10;
  v7 = &off_3F294C;
  v9 = 0;
  v10 = 0;
  sub_1C93A4(a1, (int)&v7);
  sub_58C0C(&ptr, s);
  sub_2435D8(ptr, a2);
  if ( ptr != &v6 )
    sub_339E8C(ptr);
  return sub_2564A0(&v7);
}
