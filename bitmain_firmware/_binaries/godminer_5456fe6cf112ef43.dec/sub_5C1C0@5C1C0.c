int __fastcall sub_5C1C0(int a1, __int16 a2, int a3)
{
  int v3; // r4
  _DWORD v5[2]; // [sp+0h] [bp-10h] BYREF
  __int16 v6; // [sp+8h] [bp-8h]
  __int16 v7; // [sp+Ah] [bp-6h]
  int v8; // [sp+Ch] [bp-4h]

  v5[0] = a3;
  v8 = 255;
  v5[1] = 0;
  v7 = a2;
  v6 = 1;
  v3 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 160))(a1, v5);
  usleep((__useconds_t)&stru_1869C.st_value);
  return v3;
}
