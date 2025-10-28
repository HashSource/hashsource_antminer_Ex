int __fastcall digestInit(void *a1, unsigned int a2, int a3)
{
  _DWORD s[16]; // [sp+10h] [bp-44h] BYREF

  memset(s, 0, sizeof(s));
  HIWORD(s[0]) = 257;
  LOBYTE(s[0]) = (int)(a2 * sub_344EB8(512, a2)) / 8;
  sub_246390(&s[12], a2, a3);
  return blake2b_init_param(a1, (int)s);
}
