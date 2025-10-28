int __fastcall set_frequency_with_voltage_zec(int a1)
{
  int v1; // r4
  int all_created_runtime; // r0
  _DWORD *v4; // r8
  float v5; // s17
  float v6; // s16
  int working_voltage; // r0
  float v8; // s19
  int v9; // r0
  char *v10; // r5
  int v11; // r0
  int v12; // r0
  _DWORD *v13; // r10
  int v14; // t1
  int v15; // r0
  int v16; // r10
  int v17; // r0
  _DWORD *v18; // r5
  int v19; // r4
  int v20; // t1
  int result; // r0
  _DWORD *v22; // r8
  int v23; // r4
  int v24; // t1
  int v25; // r0
  int current_voltage; // [sp+10h] [bp-101Ch]
  int v27; // [sp+14h] [bp-1018h]
  int v28; // [sp+18h] [bp-1014h]
  int v29; // [sp+1Ch] [bp-1010h]
  int v30; // [sp+24h] [bp-1008h] BYREF
  _BYTE v31[4100]; // [sp+28h] [bp-1004h] BYREF

  v1 = 0;
  v30 = 0;
  all_created_runtime = get_all_created_runtime(&v30);
  v4 = (_DWORD *)all_created_runtime;
  v5 = *(float *)(a1 + 96);
  v6 = *(float *)(*(_DWORD *)all_created_runtime + 920);
  if ( *(float *)(*(_DWORD *)all_created_runtime + 924) <= v5 )
    v5 = *(float *)(*(_DWORD *)all_created_runtime + 924);
  current_voltage = get_current_voltage(all_created_runtime);
  working_voltage = get_working_voltage();
  v8 = *(float *)(a1 + 104);
  v28 = working_voltage;
  V_LOCK(working_voltage);
  v9 = logfmt_raw((int)v31, 0x1000u);
  V_UNLOCK(v9);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/machine_runtime/zec_1746/machine_runtime_zec_1746.c",
    182,
    "set_frequency_with_voltage_zec",
    30,
    218,
    60,
    v31);
  v10 = (char *)calloc(1u, 0xD8u);
  *(_QWORD *)v10 = -1;
  strcpy(v10 + 8, "a fake work");
  *((_DWORD *)v10 + 45) = 64;
  V_LOCK(*(_DWORD *)"a fake work");
  v11 = logfmt_raw((int)v31, 0x1000u);
  V_UNLOCK(v11);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/machine_runtime/zec_1746/machine_runtime_zec_1746.c",
    182,
    "set_frequency_with_voltage_zec",
    30,
    227,
    60,
    v31);
  if ( v30 > 0 )
  {
    ++v10[40];
    v12 = *v4;
    if ( !*v4 )
      goto LABEL_18;
    v13 = v4;
    while ( 1 )
    {
      (*(void (__fastcall **)(int, char *))(v12 + 32))(v12, v10);
      if ( v30 <= ++v1 )
        break;
      ++v10[40];
      v14 = v13[1];
      ++v13;
      v12 = v14;
      if ( !v14 )
        goto LABEL_18;
    }
  }
  free(v10);
  v27 = (int)(float)((float)(v5 - v6) / 6.25);
  if ( v27 <= 0 )
  {
LABEL_25:
    if ( v5 == v6 || v30 <= 0 )
    {
LABEL_31:
      V_LOCK(v15);
      v25 = logfmt_raw((int)v31, 0x1000u);
      V_UNLOCK(v25);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/machine_runtime/zec_1746/machine_runtime_zec_1746.c",
        182,
        "set_frequency_with_voltage_zec",
        30,
        266,
        60,
        v31);
      return 0;
    }
    else
    {
      v22 = v4 - 1;
      v23 = 0;
      while ( 1 )
      {
        v24 = v22[1];
        ++v22;
        ++v23;
        result = (*(int (**)(void))(v24 + 188))();
        if ( result )
          break;
        v15 = usleep(*(_DWORD *)(a1 + 92));
        if ( v30 <= v23 )
          goto LABEL_31;
      }
    }
    return result;
  }
  v16 = 0;
  v29 = v27 - (current_voltage - v28) / 10;
  while ( 1 )
  {
    v6 = v6 + 6.25;
    if ( v30 > 0 )
      break;
LABEL_19:
    if ( v28 + 20 < current_voltage && (float)(v8 * v5) < v6 && v29 <= v16 )
    {
      current_voltage -= 10;
      result = (*(int (__fastcall **)(int, int))(a1 + 28))(a1, current_voltage);
      if ( result )
        return result;
      v15 = usleep((__useconds_t)sub_30D40);
    }
    if ( v27 == ++v16 )
      goto LABEL_25;
  }
  v17 = *v4;
  if ( !*v4 )
  {
LABEL_18:
    printf(aInvalidPointer, "be_runtimes[b]");
    return 3;
  }
  v18 = v4;
  v19 = 0;
  while ( 1 )
  {
    ++v19;
    result = (*(int (__fastcall **)(int, _DWORD))(v17 + 188))(v17, 0);
    if ( result )
      return result;
    v15 = usleep(*(_DWORD *)(a1 + 92));
    if ( v30 <= v19 )
      goto LABEL_19;
    v20 = v18[1];
    ++v18;
    v17 = v20;
    if ( !v20 )
      goto LABEL_18;
  }
}
