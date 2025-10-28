int __fastcall sub_5C1AC(int a1, char a2, unsigned __int8 a3, __int16 a4, int a5)
{
  int v5; // r4
  _DWORD v7[2]; // [sp+0h] [bp-10h] BYREF
  char v8; // [sp+8h] [bp-8h]
  char v9; // [sp+9h] [bp-7h]
  __int16 v10; // [sp+Ah] [bp-6h]
  int v11; // [sp+Ch] [bp-4h]

  v8 = 0;
  v7[1] = 0;
  v9 = a2;
  v10 = a4;
  v11 = a3;
  v7[0] = a5;
  v5 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 160))(a1, v7);
  usleep((__useconds_t)&stru_13874.st_info);
  return v5;
}
