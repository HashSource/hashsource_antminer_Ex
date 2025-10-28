int __fastcall sub_A5814(int a1, __int16 a2)
{
  int v2; // r4
  _DWORD v4[2]; // [sp+0h] [bp-10h] BYREF
  __int16 v5; // [sp+8h] [bp-8h]
  __int16 v6; // [sp+Ah] [bp-6h]
  int v7; // [sp+Ch] [bp-4h]

  v7 = 255;
  v4[1] = 0;
  v4[0] = 0;
  v6 = a2;
  v5 = 1;
  v2 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 160))(a1, v4);
  usleep((__useconds_t)&stru_18698.st_size);
  return v2;
}
