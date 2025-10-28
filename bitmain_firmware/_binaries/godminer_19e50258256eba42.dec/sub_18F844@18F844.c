int __fastcall sub_18F844(int a1, char a2, __int16 a3, int a4)
{
  _DWORD v5[2]; // [sp+10h] [bp-14h] BYREF
  char v6; // [sp+18h] [bp-Ch]
  char v7; // [sp+19h] [bp-Bh]
  __int16 v8; // [sp+1Ah] [bp-Ah]
  int v9; // [sp+1Ch] [bp-8h]

  v5[1] = 0;
  v6 = 0;
  v9 = 0;
  v7 = a2;
  v8 = a3;
  v5[0] = a4;
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 296))(a1, v5);
}
