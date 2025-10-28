int __fastcall set_frequency_with_voltage_base(int a1)
{
  int v1; // r10
  int all_created_runtime; // r0
  _DWORD *v4; // r7
  float v5; // s17
  float v6; // s16
  int current_voltage; // r9
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
  _DWORD *v18; // r7
  int v19; // r4
  int v20; // t1
  int v21; // r0
  int working_voltage; // [sp+10h] [bp-1014h]
  int v23; // [sp+14h] [bp-1010h]
  int v24; // [sp+1Ch] [bp-1008h] BYREF
  _BYTE v25[4100]; // [sp+20h] [bp-1004h] BYREF

  v1 = 0;
  v24 = 0;
  all_created_runtime = get_all_created_runtime(&v24);
  v4 = (_DWORD *)all_created_runtime;
  v5 = *(float *)(a1 + 92);
  v6 = *(float *)(*(_DWORD *)all_created_runtime + 912);
  if ( *(float *)(*(_DWORD *)all_created_runtime + 916) <= v5 )
    v5 = *(float *)(*(_DWORD *)all_created_runtime + 916);
  current_voltage = get_current_voltage();
  working_voltage = get_working_voltage();
  v8 = v5 * *(float *)(a1 + 100);
  V_LOCK(working_voltage);
  v9 = logfmt_raw((int)v25, 0x1000u);
  V_UNLOCK(v9);
  v10 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/machine_runtime/machine_runtime_base.c",
          165,
          "set_frequency_with_voltage_base",
          31,
          361,
          60,
          v25);
  v11 = 1717986919LL * (current_voltage - working_voltage);
  v23 = (current_voltage - working_voltage) / 10;
  v12 = (int)(float)((float)(v5 - v6) / 6.25);
  if ( v12 <= 0 )
  {
LABEL_17:
    if ( v6 == v5 || v24 <= 0 )
    {
LABEL_24:
      V_LOCK(v10);
      v21 = logfmt_raw((int)v25, 0x1000u);
      V_UNLOCK(v21);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/machine_runtime/machine_runtime_base.c",
        165,
        "set_frequency_with_voltage_base",
        31,
        395,
        60,
        v25);
      return 0;
    }
    else
    {
      v18 = v4 - 1;
      v19 = 0;
      while ( 1 )
      {
        v20 = v18[1];
        ++v18;
        ++v19;
        result = (*(int (**)(void))(v20 + 188))();
        if ( result )
          break;
        v10 = usleep(*(_DWORD *)(a1 + 88));
        if ( v24 <= v19 )
          goto LABEL_24;
      }
    }
  }
  else
  {
    while ( 1 )
    {
      v6 = v6 + 6.25;
      if ( v24 > 0 )
        break;
LABEL_11:
      if ( working_voltage + 20 < current_voltage && v8 < v6 )
      {
        LODWORD(v11) = v23;
        if ( v12 - v23 <= v1 )
        {
          current_voltage -= 10;
          result = (*(int (__fastcall **)(int, int))(a1 + 24))(a1, current_voltage);
          if ( result )
            return result;
          v10 = usleep((__useconds_t)&loc_30D40);
        }
      }
      if ( v12 == ++v1 )
        goto LABEL_17;
    }
    v13 = *v4;
    if ( *v4 )
    {
      v14 = v4;
      v15 = 0;
      while ( 1 )
      {
        ++v15;
        result = (*(int (__fastcall **)(int, _DWORD, _DWORD))(v13 + 188))(v13, 0, v11);
        if ( result )
          break;
        v10 = usleep(*(_DWORD *)(a1 + 88));
        if ( v24 <= v15 )
          goto LABEL_11;
        v16 = v14[1];
        ++v14;
        v13 = v16;
        if ( !v16 )
          goto LABEL_23;
      }
    }
    else
    {
LABEL_23:
      printf("invalid pointer(%s)!\n", "be_runtimes[b]");
      return 3;
    }
  }
  return result;
}
