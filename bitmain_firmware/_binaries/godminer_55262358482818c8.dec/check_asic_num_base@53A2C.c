int __fastcall check_asic_num_base(int a1)
{
  int v1; // r4
  _DWORD *all_created_runtime; // r0
  _DWORD *v4; // r5
  int v5; // t1
  int v6; // r0
  int v7; // r3
  int v8; // r1
  int v9; // r8
  int v10; // r3
  int v11; // r1
  int v12; // r12
  int v13; // r4
  int v14; // r0
  int v15; // r1
  int i; // r4
  int v17; // r0
  int v18; // r5
  _DWORD *v19; // r4
  int (**v20)(void); // t1
  int v21; // r6
  int v22; // r0
  int v23; // r6
  int v25; // r1
  const char *v26; // r0
  int v27; // r3
  int v28; // r1
  int v29; // r2
  int v30; // r3
  int v31; // r1
  int v32; // [sp+10h] [bp-98h]
  int v33; // [sp+14h] [bp-94h]
  _DWORD *v34; // [sp+18h] [bp-90h]
  int v35; // [sp+24h] [bp-84h] BYREF
  _QWORD v36[16]; // [sp+28h] [bp-80h] BYREF
  char v37[4100]; // [sp+A8h] [bp+0h] BYREF

  v1 = 0;
  v35 = 0;
  all_created_runtime = get_all_created_runtime(&v35);
  v34 = all_created_runtime;
  if ( v35 > 0 )
  {
    if ( !*all_created_runtime )
    {
LABEL_25:
      LOWORD(v25) = -16896;
      LOWORD(v26) = 28808;
      HIWORD(v25) = (unsigned int)" have been poweroff." >> 16;
      HIWORD(v26) = (unsigned int)"." >> 16;
      printf(v26, v25);
      return 3;
    }
    v4 = all_created_runtime;
    while ( 1 )
    {
      v6 = dev_ctrl(all_created_runtime);
      all_created_runtime = (_DWORD *)(*(int (__fastcall **)(int))(v6 + 32))(v1++);
      if ( v35 <= v1 )
        break;
      v5 = v4[1];
      ++v4;
      if ( !v5 )
        goto LABEL_25;
    }
  }
  V_LOCK();
  LOWORD(v7) = -16940;
  HIWORD(v7) = (unsigned int)"ine_runtime_kas_2380.c" >> 16;
  logfmt_raw(v37, 0x1000u, 0, v7);
  V_UNLOCK();
  LOWORD(v8) = -14932;
  HIWORD(v8) = (unsigned int)"%d, set voltage to %d" >> 16;
  v9 = 1;
  zlog(g_zc, v8, 169, "check_asic_num_base", 19, 618, 60, v37);
  memset(v36, 0, sizeof(v36));
  V_LOCK();
  LOWORD(v10) = -14048;
  HIWORD(v10) = (unsigned int)"%d  sweep_matrix:\n%s" >> 16;
  logfmt_raw(v37, 0x1000u, 0, v10);
  V_UNLOCK();
  LOWORD(v11) = -14932;
  LOWORD(v12) = -13992;
  LOWORD(v13) = -14932;
  HIWORD(v12) = (unsigned int)"p" >> 16;
  HIWORD(v11) = (unsigned int)"%d, set voltage to %d" >> 16;
  v32 = v12;
  v14 = zlog(g_zc, v11, 169, "check_asic_num_base", 19, 623, 60, v37);
  HIWORD(v13) = (unsigned int)"%d, set voltage to %d" >> 16;
  v33 = v13;
  while ( 1 )
  {
    v15 = v35;
    if ( v35 > 0 )
    {
      for ( i = 0; i < v35; ++i )
      {
        v17 = dev_ctrl(v14);
        v14 = (*(int (__fastcall **)(int))(v17 + 52))(i);
        v15 = v35;
      }
    }
    v18 = power_init((unsigned __int8)byte_195964, v15);
    if ( v18 )
      break;
    v14 = (*(int (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 80));
    if ( v35 > 0 )
    {
      v19 = v34 - 1;
      do
      {
        v20 = (int (**)(void))v19[1];
        ++v19;
        v14 = (*v20)();
        if ( !v14 )
        {
          v21 = 3;
          while ( 1 )
          {
            v22 = dev_ctrl(v14);
            (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v22 + 28))(
              *(_DWORD *)(*v19 + 240),
              *(_DWORD *)(*v19 + 980),
              *(_DWORD *)(*v19 + 1000));
            (*(void (**)(void))(*v19 + 216))();
            v14 = (*(int (**)(void))(*v19 + 204))();
            if ( !v14 )
              break;
            if ( !--v21 )
            {
              v23 = LODWORD(v36[v18]) + 1;
              LODWORD(v36[v18]) = v23;
              goto LABEL_20;
            }
          }
          v23 = v36[v18];
LABEL_20:
          (*(void (**)(void))(*v19 + 28))();
          V_LOCK();
          logfmt_raw(v37, 0x1000u, 0, v32, v18, v9, v23);
          V_UNLOCK();
          v14 = zlog(g_zc, v33, 169, "check_asic_num_base", 19, 657, 60, v37);
        }
        ++v18;
      }
      while ( v35 > v18 );
    }
    if ( ++v9 == 1001 )
      return 0;
  }
  V_LOCK();
  LOWORD(v27) = -14012;
  HIWORD(v27) = (unsigned int)"ck asic num test loop" >> 16;
  logfmt_raw(v37, 0x1000u, 0, v27);
  V_UNLOCK();
  LOWORD(v28) = -14932;
  HIWORD(v28) = (unsigned int)"%d, set voltage to %d" >> 16;
  zlog(g_zc, v28, 169, "check_asic_num_base", 19, 631, 100, v37);
  V_LOCK();
  LOWORD(v29) = 28468;
  LOWORD(v30) = 27800;
  HIWORD(v29) = (unsigned int)"%s, power has not init!" >> 16;
  HIWORD(v30) = (unsigned int)"r" >> 16;
  logfmt_raw(v37, 0x1000u, 0, v30, v29);
  V_UNLOCK();
  LOWORD(v31) = -14932;
  HIWORD(v31) = (unsigned int)"%d, set voltage to %d" >> 16;
  zlog(g_zc, v31, 169, "check_asic_num_base", 19, 632, 100, v37);
  return 30;
}
