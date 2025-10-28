int __fastcall read_system_status_from_monitor(int a1)
{
  int v1; // r1
  int v2; // r2
  int v3; // r3
  int v4; // r1
  int v5; // r2
  int v6; // r3
  int v7; // r1
  __int64 v8; // r2
  int v9; // r1
  _DWORD v12[15]; // [sp+Ch] [bp-50h] BYREF
  _DWORD *all_created_runtime; // [sp+48h] [bp-14h]
  int i; // [sp+4Ch] [bp-10h]

  memset(v12, 0, sizeof(v12));
  all_created_runtime = get_all_created_runtime(v12);
  v12[1] = v12[0];
  for ( i = 0; i < v12[0]; ++i )
  {
    *(float *)&v12[4] = *(float *)&v12[4] + *(float *)&dword_5ADBD8[54 * *(_DWORD *)(all_created_runtime[i] + 264) + 8];
    *(float *)&v12[5] = *(float *)&v12[5] + *(float *)&dword_5ADBD8[54 * *(_DWORD *)(all_created_runtime[i] + 264) + 9];
    *(float *)&v12[6] = *(float *)&v12[6] + *(float *)&dword_5ADBD8[54 * *(_DWORD *)(all_created_runtime[i] + 264) + 10];
    *(float *)&v12[7] = *(float *)&v12[7] + *(float *)&dword_5ADBD8[54 * *(_DWORD *)(all_created_runtime[i] + 264) + 11];
    *(_QWORD *)&v12[13] += *(_QWORD *)&dword_5ADBD8[54 * *(_DWORD *)(all_created_runtime[i] + 264) + 20];
    *(double *)&v12[9] = *(double *)&v12[9]
                       + *(double *)&dword_5ADBD8[54 * *(_DWORD *)(all_created_runtime[i] + 264) + 12];
    *(double *)&v12[11] = *(double *)&v12[11]
                        + *(double *)&dword_5ADBD8[54 * *(_DWORD *)(all_created_runtime[i] + 264) + 14];
  }
  if ( v12[0] > 0 )
  {
    v12[2] = dword_5ADBD8[54 * *(_DWORD *)(*all_created_runtime + 264) + 23];
    v12[3] = dword_5ADBD8[54 * *(_DWORD *)(*all_created_runtime + 264) + 24];
  }
  v1 = v12[2];
  v2 = v12[3];
  v3 = v12[4];
  *(_DWORD *)a1 = v12[1];
  *(_DWORD *)(a1 + 4) = v1;
  *(_DWORD *)(a1 + 8) = v2;
  *(_DWORD *)(a1 + 12) = v3;
  v4 = v12[6];
  v5 = v12[7];
  v6 = v12[8];
  *(_DWORD *)(a1 + 16) = v12[5];
  *(_DWORD *)(a1 + 20) = v4;
  *(_DWORD *)(a1 + 24) = v5;
  *(_DWORD *)(a1 + 28) = v6;
  v7 = v12[10];
  v8 = *(_QWORD *)&v12[11];
  *(_DWORD *)(a1 + 32) = v12[9];
  *(_DWORD *)(a1 + 36) = v7;
  *(_QWORD *)(a1 + 40) = v8;
  v9 = v12[14];
  *(_DWORD *)(a1 + 48) = v12[13];
  *(_DWORD *)(a1 + 52) = v9;
  return a1;
}
