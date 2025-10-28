int __fastcall read_system_status_from_monitor(int a1)
{
  int *all_created_runtime; // r0
  float v3; // s15
  double v4; // d6
  int *v5; // r8
  float v6; // s14
  float v7; // s11
  __int64 v8; // kr00_8
  int v9; // t1
  int v10; // r3
  char *v11; // r12
  float *v12; // r3
  int v13; // r1
  int v15; // r3
  int v16; // [sp+4h] [bp-8h] BYREF

  v16 = 0;
  all_created_runtime = (int *)get_all_created_runtime(&v16);
  v3 = 0.0;
  v4 = 0.0;
  if ( v16 <= 0 )
  {
    v6 = 0.0;
    v7 = 0.0;
    v8 = 0;
  }
  else
  {
    v5 = &all_created_runtime[v16];
    v6 = 0.0;
    v7 = 0.0;
    v8 = 0;
    do
    {
      v9 = *all_created_runtime++;
      v10 = 208 * *(_DWORD *)(v9 + 144);
      v11 = (char *)&unk_167550 + v10;
      v12 = (float *)((char *)&unk_167410 + v10);
      v8 += *((_QWORD *)v11 + 9);
      v7 = v7 + v12[88];
      v6 = v6 + v12[89];
      v3 = v3 + v12[90];
      v4 = v4 + *((double *)v12 + 46);
    }
    while ( v5 != all_created_runtime );
  }
  v13 = dword_1675A4;
  v15 = dword_1675A8;
  *(_DWORD *)a1 = v16;
  *(float *)(a1 + 12) = v7;
  *(float *)(a1 + 16) = v6;
  *(float *)(a1 + 20) = v3;
  *(double *)(a1 + 24) = v4;
  *(_QWORD *)(a1 + 32) = v8;
  *(_DWORD *)(a1 + 4) = v13;
  *(_DWORD *)(a1 + 8) = v15;
  return a1;
}
