int __fastcall set_frequency_with_voltage_zec(int a1)
{
  float v1; // r3
  char *v2; // r12
  _BYTE v6[8]; // [sp+1Ch] [bp-1048h] BYREF
  int v7; // [sp+101Ch] [bp-48h] BYREF
  int v8; // [sp+1020h] [bp-44h]
  void *ptr; // [sp+1024h] [bp-40h]
  int v10; // [sp+1028h] [bp-3Ch]
  float v11; // [sp+102Ch] [bp-38h]
  int v12; // [sp+1030h] [bp-34h]
  int working_voltage; // [sp+1034h] [bp-30h]
  int v14; // [sp+1038h] [bp-2Ch]
  unsigned int v15; // [sp+103Ch] [bp-28h]
  float v16; // [sp+1040h] [bp-24h]
  float v17; // [sp+1044h] [bp-20h]
  _DWORD *all_created_runtime; // [sp+1048h] [bp-1Ch]
  int v19; // [sp+104Ch] [bp-18h]
  int i; // [sp+1050h] [bp-14h]
  int current_voltage; // [sp+1054h] [bp-10h]
  int j; // [sp+1058h] [bp-Ch]
  float v23; // [sp+105Ch] [bp-8h]

  v19 = 0;
  v7 = 0;
  all_created_runtime = get_all_created_runtime(&v7);
  current_voltage = 0;
  v17 = 6.25;
  v23 = *(float *)(*all_created_runtime + 1016);
  if ( *(float *)(*all_created_runtime + 1020) <= *(float *)(a1 + 104) )
    v1 = *(float *)(*all_created_runtime + 1020);
  else
    v1 = *(float *)(a1 + 104);
  v16 = v1;
  v15 = 10;
  v14 = 0;
  current_voltage = get_current_voltage();
  working_voltage = get_working_voltage();
  v12 = v14 + working_voltage;
  v11 = v16 * *(float *)(a1 + 112);
  V_LOCK();
  logfmt_raw(v6, 0x1000u, 0, "Initializing chip cluster, please wait, this may take up to 1 minutes...");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/zec_1746/machine_runtime_zec_1746.c",
    179,
    "set_frequency_with_voltage_zec",
    30,
    202,
    60,
    v6);
  v10 = sub_344EB8(current_voltage - v12, v15);
  ptr = calloc(1u, 0xD8u);
  *(_QWORD *)ptr = -1;
  v2 = (char *)ptr + 8;
  *((_DWORD *)ptr + 2) = *(_DWORD *)"a fake work";
  strcpy(v2 + 4, "ke work");
  *((_DWORD *)ptr + 45) = 64;
  V_LOCK();
  logfmt_raw(v6, 0x1000u, 0, "send a fake work to start asic");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/zec_1746/machine_runtime_zec_1746.c",
    179,
    "set_frequency_with_voltage_zec",
    30,
    211,
    60,
    v6);
  for ( i = 0; i < v7; ++i )
  {
    ++*((_BYTE *)ptr + 40);
    if ( !all_created_runtime[i] )
    {
LABEL_6:
      printf("invalid pointer(%s)!\n", "be_runtimes[b]");
      return 3;
    }
    (*(void (__fastcall **)(_DWORD, void *))(all_created_runtime[i] + 36))(all_created_runtime[i], ptr);
  }
  free(ptr);
  v8 = (int)(float)((float)(v16 - v23) / v17);
  for ( j = 0; j < v8; ++j )
  {
    v23 = v23 + v17;
    for ( i = 0; i < v7; ++i )
    {
      if ( !all_created_runtime[i] )
        goto LABEL_6;
      v19 = (*(int (__fastcall **)(_DWORD, _DWORD))(all_created_runtime[i] + 204))(all_created_runtime[i], 0);
      if ( v19 )
        return v19;
      usleep(*(_DWORD *)(a1 + 100));
    }
    if ( current_voltage > (int)(2 * v15 + v12) && v23 > v11 && j >= v8 - v10 )
    {
      current_voltage -= v15;
      v19 = (*(int (__fastcall **)(int, int))(a1 + 28))(a1, current_voltage);
      if ( v19 )
        return v19;
      usleep(0x30D40u);
    }
  }
  if ( v23 != v16 )
  {
    for ( i = 0; i < v7; ++i )
    {
      v19 = (*(int (__fastcall **)(_DWORD, _DWORD))(all_created_runtime[i] + 204))(all_created_runtime[i], 0);
      if ( v19 )
        return v19;
      usleep(*(_DWORD *)(a1 + 100));
    }
  }
  V_LOCK();
  logfmt_raw(v6, 0x1000u, 0, "set freq to %.2f, current voltage %d", v16, current_voltage);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/zec_1746/machine_runtime_zec_1746.c",
    179,
    "set_frequency_with_voltage_zec",
    30,
    250,
    60,
    v6);
  return v19;
}
