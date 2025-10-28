int __fastcall sub_1CE67C(int a1)
{
  _DWORD s[4]; // [sp+Ch] [bp-18h] BYREF
  int v4; // [sp+1Ch] [bp-8h]

  memset(s, 0, sizeof(s));
  s[2] = 3670017;
  s[0] = 0x80000000;
  v4 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 296))(a1, s);
  usleep((__useconds_t)&stru_186A0);
  return v4;
}
