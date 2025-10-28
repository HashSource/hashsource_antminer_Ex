int __fastcall set_frequency_with_voltage_zec(int a1)
{
  int v1; // r4
  _DWORD *all_created_runtime; // r0
  _DWORD *v4; // r8
  float v5; // s17
  float v6; // s16
  int working_voltage; // r0
  float v8; // s19
  int v9; // r3
  int v10; // r1
  _DWORD *v11; // r0
  int *v12; // r2
  _DWORD *v13; // r3
  _DWORD *v14; // r5
  int v15; // r0
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // r1
  int v20; // r0
  _DWORD *v21; // r10
  int v22; // t1
  int v23; // r10
  int v24; // r0
  _DWORD *v25; // r5
  int v26; // r4
  int v27; // t1
  int result; // r0
  int v29; // r1
  const char *v30; // r0
  _DWORD *v31; // r8
  int v32; // r4
  int v33; // t1
  int v34; // r3
  int v35; // r1
  int current_voltage; // [sp+10h] [bp-101Ch]
  int v37; // [sp+14h] [bp-1018h]
  int v38; // [sp+18h] [bp-1014h]
  int v39; // [sp+1Ch] [bp-1010h]
  int v40; // [sp+24h] [bp-1008h] BYREF
  char v41[4100]; // [sp+28h] [bp-1004h] BYREF

  v1 = 0;
  v40 = 0;
  all_created_runtime = get_all_created_runtime(&v40);
  v4 = all_created_runtime;
  v5 = *(float *)(a1 + 104);
  v6 = *(float *)(*all_created_runtime + 972);
  if ( *(float *)(*all_created_runtime + 976) <= v5 )
    v5 = *(float *)(*all_created_runtime + 976);
  current_voltage = get_current_voltage();
  working_voltage = get_working_voltage();
  v8 = *(float *)(a1 + 112);
  v38 = working_voltage;
  V_LOCK();
  LOWORD(v9) = -12752;
  HIWORD(v9) = (unsigned int)"ec" >> 16;
  logfmt_raw(v41, 0x1000u, 0, v9);
  V_UNLOCK();
  LOWORD(v10) = -12676;
  HIWORD(v10) = (unsigned int)"e up to 1 minutes..." >> 16;
  zlog(g_zc, v10, 182, "set_frequency_with_voltage_zec", 30, 220, 60, v41);
  v11 = calloc(1u, 0xD8u);
  LOWORD(v12) = -12492;
  v13 = v11 + 2;
  HIWORD(v12) = (unsigned int)"ine_runtime_zec_1746.c" >> 16;
  v14 = v11;
  v15 = *v12;
  v16 = v12[1];
  v17 = v12[2];
  *(_QWORD *)v14 = -1;
  *v13 = v15;
  v13[1] = v16;
  v13[2] = v17;
  v14[45] = 64;
  V_LOCK();
  LOWORD(v18) = -12480;
  HIWORD(v18) = (unsigned int)"zec_1746.c" >> 16;
  logfmt_raw(v41, 0x1000u, 0, v18);
  V_UNLOCK();
  LOWORD(v19) = -12676;
  HIWORD(v19) = (unsigned int)"e up to 1 minutes..." >> 16;
  zlog(g_zc, v19, 182, "set_frequency_with_voltage_zec", 30, 229, 60, v41);
  if ( v40 > 0 )
  {
    ++*((_BYTE *)v14 + 40);
    v20 = *v4;
    if ( !*v4 )
      goto LABEL_18;
    v21 = v4;
    while ( 1 )
    {
      (*(void (__fastcall **)(int, _DWORD *))(v20 + 32))(v20, v14);
      if ( v40 <= ++v1 )
        break;
      ++*((_BYTE *)v14 + 40);
      v22 = v21[1];
      ++v21;
      v20 = v22;
      if ( !v22 )
        goto LABEL_18;
    }
  }
  free(v14);
  v37 = (int)(float)((float)(v5 - v6) / 6.25);
  if ( v37 <= 0 )
  {
LABEL_25:
    if ( v5 == v6 || v40 <= 0 )
    {
LABEL_31:
      V_LOCK();
      LOWORD(v34) = -12448;
      HIWORD(v34) = (unsigned int)"ake work to start asic" >> 16;
      logfmt_raw(v41, 0x1000u, 0, v34, v5, current_voltage);
      V_UNLOCK();
      LOWORD(v35) = -12676;
      HIWORD(v35) = (unsigned int)"e up to 1 minutes..." >> 16;
      zlog(g_zc, v35, 182, "set_frequency_with_voltage_zec", 30, 268, 60, v41);
      return 0;
    }
    else
    {
      v31 = v4 - 1;
      v32 = 0;
      while ( 1 )
      {
        v33 = v31[1];
        ++v31;
        ++v32;
        result = (*(int (**)(void))(v33 + 188))();
        if ( result )
          break;
        usleep(*(_DWORD *)(a1 + 100));
        if ( v40 <= v32 )
          goto LABEL_31;
      }
    }
    return result;
  }
  v23 = 0;
  v39 = v37 - (current_voltage - v38) / 10;
  while ( 1 )
  {
    v6 = v6 + 6.25;
    if ( v40 > 0 )
      break;
LABEL_19:
    if ( v38 + 20 < current_voltage && (float)(v8 * v5) < v6 && v39 <= v23 )
    {
      current_voltage -= 10;
      result = (*(int (__fastcall **)(int, int))(a1 + 28))(a1, current_voltage);
      if ( result )
        return result;
      usleep((__useconds_t)&loc_30D40);
    }
    if ( v37 == ++v23 )
      goto LABEL_25;
  }
  v24 = *v4;
  if ( !*v4 )
  {
LABEL_18:
    LOWORD(v29) = -16528;
    LOWORD(v30) = 28808;
    HIWORD(v29) = (unsigned int)" may take up 5 minutes" >> 16;
    HIWORD(v30) = (unsigned int)"." >> 16;
    printf(v30, v29);
    return 3;
  }
  v25 = v4;
  v26 = 0;
  while ( 1 )
  {
    ++v26;
    result = (*(int (__fastcall **)(int, _DWORD))(v24 + 188))(v24, 0);
    if ( result )
      return result;
    usleep(*(_DWORD *)(a1 + 100));
    if ( v40 <= v26 )
      goto LABEL_19;
    v27 = v25[1];
    ++v25;
    v24 = v27;
    if ( !v27 )
      goto LABEL_18;
  }
}
