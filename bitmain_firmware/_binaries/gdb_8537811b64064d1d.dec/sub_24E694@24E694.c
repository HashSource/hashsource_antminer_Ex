void __fastcall sub_24E694(int a1, char *a2, int a3)
{
  int v4; // r6
  void *ptr[2]; // [sp+0h] [bp-18h] BYREF
  _BYTE v6[16]; // [sp+8h] [bp-10h] BYREF

  v4 = a1 + 60;
  if ( !a2 )
    a3 = -1;
  ptr[0] = v6;
  if ( a2 )
    a3 = (int)&a2[strlen(a2)];
  sub_248B4C(ptr, a2, a3);
  sub_250434(v4, ptr);
  if ( ptr[0] != v6 )
    sub_339E8C(ptr[0]);
}
