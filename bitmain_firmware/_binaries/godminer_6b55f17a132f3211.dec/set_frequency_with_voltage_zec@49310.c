int __fastcall set_frequency_with_voltage_zec(int a1)
{
  int all_created_runtime; // r0
  _DWORD *v3; // r7
  float v4; // s17
  float v5; // s16
  int current_voltage; // r10
  int working_voltage; // r9
  float v8; // s20
  int v9; // r0
  int v10; // r0
  __int64 v11; // r2
  int v12; // s19
  int v13; // r0
  _DWORD *v14; // r5
  int v15; // r4
  int v16; // t1
  int result; // r0
  _DWORD *v19; // r7
  int v20; // r4
  int v21; // t1
  int v22; // r0
  int v23; // [sp+10h] [bp-1014h]
  int v24; // [sp+14h] [bp-1010h]
  int v25; // [sp+1Ch] [bp-1008h] BYREF
  _BYTE v26[4100]; // [sp+20h] [bp-1004h] BYREF

  v25 = 0;
  all_created_runtime = get_all_created_runtime(&v25);
  v3 = (_DWORD *)all_created_runtime;
  v4 = *(float *)(a1 + 92);
  v5 = *(float *)(*(_DWORD *)all_created_runtime + 912);
  if ( *(float *)(*(_DWORD *)all_created_runtime + 916) <= v4 )
    v4 = *(float *)(*(_DWORD *)all_created_runtime + 916);
  current_voltage = get_current_voltage();
  working_voltage = get_working_voltage();
  v8 = v4 * *(float *)(a1 + 100);
  V_LOCK(working_voltage);
  v9 = logfmt_raw((int)v26, 0x1000u);
  V_UNLOCK(v9);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/machine_runtime/zec_1746/machine_runtime_zec_1746.c",
    178,
    "set_frequency_with_voltage_zec",
    30,
    106,
    60,
    v26);
  v10 = (*(int (__fastcall **)(int, int))(a1 + 24))(a1, working_voltage);
  v11 = 1717986919LL * (current_voltage - working_voltage);
  v24 = (current_voltage - working_voltage) / 10;
  v12 = (int)(float)((float)(v4 - v5) / 6.25);
  if ( v12 <= 0 )
  {
LABEL_19:
    if ( v5 == v4 || v25 <= 0 )
    {
LABEL_26:
      V_LOCK(v10);
      v22 = logfmt_raw((int)v26, 0x1000u);
      V_UNLOCK(v22);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/machine_runtime/zec_1746/machine_runtime_zec_1746.c",
        178,
        "set_frequency_with_voltage_zec",
        30,
        139,
        60,
        v26);
      return 0;
    }
    else
    {
      v19 = v3 - 1;
      v20 = 0;
      while ( 1 )
      {
        v21 = v19[1];
        ++v19;
        ++v20;
        result = (*(int (**)(void))(v21 + 188))();
        if ( result )
          break;
        v10 = usleep(*(_DWORD *)(a1 + 88));
        if ( v25 <= v20 )
          goto LABEL_26;
      }
    }
  }
  else
  {
    v23 = 0;
    while ( 1 )
    {
      v5 = v5 + 6.25;
      if ( v25 > 0 )
        break;
LABEL_12:
      if ( working_voltage + 20 < current_voltage && v8 < v5 && v12 - v24 <= v23 )
      {
        current_voltage -= 10;
        result = (*(int (__fastcall **)(int, int))(a1 + 24))(a1, current_voltage);
        if ( result )
          return result;
        v10 = usleep((__useconds_t)&loc_30D40);
      }
      LODWORD(v11) = v12;
      if ( v12 == ++v23 )
        goto LABEL_19;
    }
    v13 = *v3;
    if ( *v3 )
    {
      v14 = v3;
      v15 = 0;
      while ( 1 )
      {
        ++v15;
        result = (*(int (__fastcall **)(int, _DWORD, _DWORD))(v13 + 188))(v13, 0, v11);
        if ( result )
          break;
        v10 = usleep(*(_DWORD *)(a1 + 88));
        if ( v25 <= v15 )
          goto LABEL_12;
        v16 = v14[1];
        ++v14;
        v13 = v16;
        if ( !v16 )
          goto LABEL_25;
      }
    }
    else
    {
LABEL_25:
      printf("invalid pointer(%s)!\n", "be_runtimes[b]");
      return 3;
    }
  }
  return result;
}
