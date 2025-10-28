int __fastcall sub_463A4(int a1, int a2)
{
  int v3; // r5
  int result; // r0
  int v5; // r6
  int v6; // r5
  _DWORD *v7; // r2
  int v8; // r1
  int v9; // lr
  int v10; // t1
  int v11; // r0
  _DWORD *v12; // r1
  int v13; // r3
  int v14; // r7
  int v15; // r0
  bool v16; // zf
  _DWORD v17[14]; // [sp+10h] [bp+0h] BYREF
  _DWORD v18[1025]; // [sp+48h] [bp+38h] BYREF

  v17[0] = 20;
  v17[1] = 15;
  v17[2] = 10;
  v17[3] = 5;
  v17[4] = -1;
  v17[5] = -6;
  v17[6] = -11;
  v17[7] = 10;
  v17[8] = 30;
  v17[9] = 50;
  v17[10] = 70;
  v17[11] = 100;
  v17[12] = 120;
  v17[13] = 140;
  if ( dword_163440 <= a2 )
  {
    if ( dword_163440 == a2 )
      return dword_165DB4;
    v5 = 25;
    v6 = 5;
  }
  else
  {
    v5 = 20;
    v6 = 0;
  }
  v7 = v17;
  v8 = 0;
  v9 = a2 - *(_DWORD *)(a1 + 76);
  while ( 1 )
  {
    v10 = v7[1];
    ++v7;
    v11 = v8 + 1;
    if ( v6 + v10 < v9 && v6 + *(v7 - 1) >= v9 )
      break;
    ++v8;
  }
  v12 = &v18[v8];
  v13 = *(v12 - 7);
  if ( v5 < v9 )
    goto LABEL_12;
  if ( v6 - 11 < v9 )
  {
    if ( v13 <= 0 )
    {
LABEL_12:
      v3 = 0;
      goto LABEL_13;
    }
    if ( v13 >= 140 )
      v3 = 140;
    else
      v3 = *(v12 - 7);
  }
  else
  {
    v3 = 140;
  }
LABEL_13:
  v14 = a2;
  V_LOCK(v11);
  v15 = logfmt_raw((int)v18, 0x1000u);
  V_UNLOCK(v15);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/machine_runtime/hns_2130/machine_runtime_hns_2130.c",
    178,
    "calc_voltage_compensate_hns_2130",
    32,
    37,
    20,
    v18);
  if ( dword_165DB4 > v3 )
  {
    v16 = dword_163440 == v14;
    if ( dword_163440 < v14 )
    {
      if ( v3 >= dword_165DB4 )
        v3 = dword_165DB4;
      goto LABEL_16;
    }
    goto LABEL_15;
  }
  if ( dword_165DB4 < v3 )
  {
    v16 = v14 == dword_163440;
    if ( v14 < dword_163440 )
      goto LABEL_16;
LABEL_15:
    v3 = dword_165DB4;
    if ( !v16 )
    {
LABEL_16:
      dword_163440 = v14;
      goto LABEL_17;
    }
    return v3;
  }
  if ( v14 != dword_163440 )
    goto LABEL_16;
LABEL_17:
  result = v3;
  if ( dword_165DB4 != v3 )
    dword_165DB4 = v3;
  return result;
}
