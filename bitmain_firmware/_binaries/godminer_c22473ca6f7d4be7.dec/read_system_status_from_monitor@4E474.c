int __fastcall read_system_status_from_monitor(int a1)
{
  int *all_created_runtime; // r0
  int v3; // r4
  float v4; // s15
  double v5; // d6
  int *v6; // r8
  float v7; // s14
  float v8; // s11
  __int64 v9; // kr00_8
  int v10; // t1
  int v11; // r3
  int v12; // r12
  int v13; // r3
  int v14; // r1
  int v16; // r3
  int v17; // [sp+4h] [bp-8h] BYREF

  LOWORD(v3) = 25592;
  v17 = 0;
  all_created_runtime = (int *)get_all_created_runtime(&v17);
  HIWORD(v3) = (unsigned int)&g_miner_type[240] >> 16;
  v4 = 0.0;
  v5 = 0.0;
  if ( v17 <= 0 )
  {
    v7 = 0.0;
    v8 = 0.0;
    v9 = 0;
  }
  else
  {
    v6 = &all_created_runtime[v17];
    v7 = 0.0;
    v8 = 0.0;
    v9 = 0;
    do
    {
      v10 = *all_created_runtime++;
      v11 = 208 * *(_DWORD *)(v10 + 136);
      v12 = v3 + 320 + v11;
      v13 = v3 + v11;
      v9 += *(_QWORD *)(v12 + 72);
      v8 = v8 + *(float *)(v13 + 352);
      v7 = v7 + *(float *)(v13 + 356);
      v4 = v4 + *(float *)(v13 + 360);
      v5 = v5 + *(double *)(v13 + 368);
    }
    while ( v6 != all_created_runtime );
  }
  v14 = *(_DWORD *)(v3 + 0x194);
  v16 = *(_DWORD *)(v3 + 0x198);
  *(_DWORD *)a1 = v17;
  *(float *)(a1 + 12) = v8;
  *(float *)(a1 + 16) = v7;
  *(float *)(a1 + 20) = v4;
  *(double *)(a1 + 24) = v5;
  *(_QWORD *)(a1 + 32) = v9;
  *(_DWORD *)(a1 + 4) = v14;
  *(_DWORD *)(a1 + 8) = v16;
  return a1;
}
