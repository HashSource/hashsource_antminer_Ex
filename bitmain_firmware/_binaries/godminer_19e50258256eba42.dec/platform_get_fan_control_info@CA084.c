int __fastcall platform_get_fan_control_info(int result)
{
  int v1; // r1
  int v2; // r2
  int v3; // r3
  int v4; // r1
  int v5; // r2
  int v6; // r3
  float v7; // r1
  float v8; // r2
  float v9; // r3

  v1 = dword_C27390;
  v2 = dword_C27394;
  v3 = dword_C27398;
  *(_DWORD *)result = dword_C2738C;
  *(_DWORD *)(result + 4) = v1;
  *(_DWORD *)(result + 8) = v2;
  *(_DWORD *)(result + 12) = v3;
  v4 = dword_C273A0;
  v5 = dword_C273A4;
  v6 = dword_C273A8;
  *(_DWORD *)(result + 16) = dword_C2739C;
  *(_DWORD *)(result + 20) = v4;
  *(_DWORD *)(result + 24) = v5;
  *(_DWORD *)(result + 28) = v6;
  v7 = flt_C273B0;
  v8 = flt_C273B4;
  v9 = flt_C273B8;
  *(_DWORD *)(result + 32) = dword_C273AC;
  *(float *)(result + 36) = v7;
  *(float *)(result + 40) = v8;
  *(float *)(result + 44) = v9;
  *(float *)(result + 48) = flt_C273BC;
  return result;
}
