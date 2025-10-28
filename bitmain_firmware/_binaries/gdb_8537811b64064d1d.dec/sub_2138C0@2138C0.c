char *__fastcall sub_2138C0(const char *a1, unsigned int a2, _DWORD *a3, int a4)
{
  char *v8; // r4
  const char **v10; // [sp+Ch] [bp-8h] BYREF

  sub_2127B4(&v10, a1);
  v8 = sub_213208((int)v10, a1, a2, a3, a4, 0);
  if ( v10 )
    ((void (*)(void))loc_1625D0)();
  return v8;
}
