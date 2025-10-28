int __fastcall sub_7A39C(int a1, int a2)
{
  int v3; // r3
  _BYTE v6[16]; // [sp+1Ch] [bp-1050h] BYREF
  _DWORD v7[7]; // [sp+101Ch] [bp-50h]
  _DWORD v8[7]; // [sp+1038h] [bp-34h]
  int v9; // [sp+1054h] [bp-18h]
  int v10; // [sp+1058h] [bp-14h]
  int i; // [sp+105Ch] [bp-10h]
  int v12; // [sp+1060h] [bp-Ch]
  int v13; // [sp+1064h] [bp-8h]

  v8[0] = 20;
  v8[1] = 15;
  v8[2] = 10;
  v8[3] = 5;
  v8[4] = -1;
  v8[5] = -6;
  v8[6] = -11;
  v7[0] = 10;
  v7[1] = 30;
  v7[2] = 50;
  v7[3] = 70;
  v7[4] = 100;
  v7[5] = 120;
  v7[6] = 140;
  v13 = 0;
  v10 = a2 - *(_DWORD *)(a1 + 88);
  v9 = 7;
  v12 = 0;
  if ( a2 >= dword_598FB0 )
    v12 = 5;
  if ( a2 == dword_598FB0 )
    return dword_5AD324;
  for ( i = 0; i < v9; ++i )
  {
    if ( v10 > v8[i + 1] + v12 && v10 <= v8[i] + v12 )
    {
      v13 = v7[i];
      break;
    }
  }
  if ( v10 > v8[0] + v12 )
    v13 = 0;
  if ( v10 <= v8[v9 - 1] + v12 )
    v13 = v7[v9 - 1];
  if ( v13 <= 0 )
  {
    v3 = 0;
  }
  else
  {
    v3 = v13;
    if ( v13 >= 140 )
      v3 = 140;
  }
  v13 = v3;
  V_LOCK();
  logfmt_raw(
    v6,
    0x1000u,
    0,
    "prev_temp:%d, temp:%d, prev_voltage_compensate:%d, voltage_compensate:%d",
    dword_598FB0,
    a2,
    dword_5AD324,
    v13);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/hns_2130/machine_runtime_hns_2130.c",
    179,
    "calc_voltage_compensate_hns_2130",
    32,
    37,
    20,
    v6);
  if ( v13 < dword_5AD324 && a2 <= dword_598FB0 )
    v13 = dword_5AD324;
  if ( v13 > dword_5AD324 && a2 >= dword_598FB0 )
    v13 = dword_5AD324;
  if ( a2 != dword_598FB0 )
    dword_598FB0 = a2;
  if ( v13 != dword_5AD324 )
    dword_5AD324 = v13;
  return v13;
}
