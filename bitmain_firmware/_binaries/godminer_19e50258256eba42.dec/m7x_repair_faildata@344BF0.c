int __fastcall m7x_repair_faildata(int a1, int a2, int *a3)
{
  _DWORD v7[16]; // [sp+10h] [bp-8100h] BYREF
  int v8[16]; // [sp+50h] [bp-80C0h] BYREF
  int v9[32]; // [sp+90h] [bp-8080h] BYREF
  _BYTE v10[32768]; // [sp+110h] [bp-8000h] BYREF

  initialization2((int)v10, 2048, 4, 16, 16, v7, v8, v9);
  return FBM_feed3(a1, a2, (int)v10, v7, v8, v9, a3);
}
