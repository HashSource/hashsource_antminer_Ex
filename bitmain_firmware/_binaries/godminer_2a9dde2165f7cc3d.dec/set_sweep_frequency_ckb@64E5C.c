int __fastcall set_sweep_frequency_ckb(int a1, float *a2)
{
  float v2; // s0
  float v5; // s22
  int domain_asic_num; // r0
  int v7; // r1
  float v8; // s15
  float *v9; // r1
  float *v10; // r3
  float *v11; // r2
  float v12; // s14
  int v13; // r3
  unsigned int *v14; // r0
  float *v15; // r9
  int v16; // r7
  float *v17; // r6
  float v18; // s15
  bool v19; // fzf
  bool v20; // fnf
  float v21; // s16
  int v22; // r3
  char v23; // r3
  unsigned int *v24; // r0
  int v25; // r0
  int v26; // r0
  float *v27; // r6
  int v28; // r5
  float v29; // s14
  int v30; // r2
  char v32; // [sp+3Ch] [bp-12A0h]
  int v33; // [sp+40h] [bp-129Ch]
  int chain_domain_num; // [sp+44h] [bp-1298h]
  float *v35; // [sp+50h] [bp-128Ch]
  int i; // [sp+54h] [bp-1288h]
  int v37; // [sp+60h] [bp-127Ch]
  int v38; // [sp+64h] [bp-1278h]
  int v39; // [sp+68h] [bp-1274h]
  unsigned int v41; // [sp+74h] [bp-1268h] BYREF
  int v42; // [sp+78h] [bp-1264h] BYREF
  _DWORD v43[16]; // [sp+98h] [bp-1244h] BYREF
  _DWORD v44[128]; // [sp+D8h] [bp-1204h] BYREF
  char s[4100]; // [sp+2D8h] [bp-1004h] BYREF

  v5 = *(float *)(a1 + 924);
  chain_domain_num = platform_get_chain_domain_num();
  domain_asic_num = platform_get_domain_asic_num();
  v7 = *(_DWORD *)(a1 + 304);
  v37 = domain_asic_num;
  v8 = 0.0;
  if ( v7 )
  {
    v9 = &a2[v7];
    v10 = a2;
    v11 = (float *)v44;
    do
    {
      v12 = *v10++;
      *v11++ = v5;
      if ( v12 > v8 )
        v8 = v12;
    }
    while ( v10 != v9 );
  }
  v13 = (int)(((float)((float)(v8 - v5) + v2) - 0.001) / v2);
  if ( v13 > 0 )
  {
    v39 = v13 + 1;
    v14 = (unsigned int *)"set freq: %.2f, expected freq: %.2f";
    v33 = 4 * v37;
    v38 = 1;
    do
    {
      if ( v37 > 0 )
      {
        v35 = a2;
        for ( i = 0; i != v37; ++i )
        {
          if ( chain_domain_num > 0 )
          {
            v15 = v35;
            v16 = 0;
            v17 = (float *)&v44[i];
            v32 = i;
            do
            {
              v18 = *v15;
              v14 = &v41;
              ++v16;
              v19 = *v15 == *v17;
              v20 = *v15 < *v17;
              v15 = (float *)((char *)v15 + v33);
              if ( !v20 && !v19 )
              {
                v21 = v5 + (float)((float)v38 * v2);
                v22 = *(_DWORD *)(a1 + 396);
                v43[2] = 0x80000;
                v43[0] = 0;
                v23 = v22 * v32;
                v43[1] = 0;
                v43[3] = 0;
                if ( v18 < v21 )
                  v21 = v18;
                BYTE1(v43[2]) = v23;
                v41 = 0;
                v24 = sub_61094(&v41);
                v43[0] = v41;
                V_LOCK(v24);
                V_INT((int)&v42, "chain");
                v25 = logfmt_raw((int)s, 0x1000u);
                V_UNLOCK(v25);
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/"
                  "godminer-origin_godminer-new/backend/chip_setting.c",
                  153,
                  "ChipSetting_one_asic_freq_CKB_2042",
                  34,
                  660,
                  20,
                  s);
                (*(void (__fastcall **)(int, _DWORD *))(a1 + 240))(a1, v43);
                v14 = (unsigned int *)usleep(0x2710u);
                *v17 = v21;
              }
              v32 += v37;
              v17 = (float *)((char *)v17 + v33);
            }
            while ( chain_domain_num != v16 );
          }
          ++v35;
        }
      }
      V_LOCK(v14);
      ++v38;
      v26 = logfmt_raw((int)s, 0x1000u);
      V_UNLOCK(v26);
      v14 = (unsigned int *)zlog(
                              g_zc,
                              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/re"
                              "lease/build/godminer-origin_godminer-new/backend/backend_ckb_2042/backend_ckb_2042.c",
                              174,
                              "set_sweep_frequency_ckb",
                              23,
                              437,
                              20,
                              s);
    }
    while ( v38 != v39 );
  }
  memset(s, 0, 0x1000u);
  memset(v43, 0, sizeof(v43));
  if ( v37 * chain_domain_num > 0 )
  {
    v27 = (float *)v44;
    v28 = 0;
    do
    {
      v29 = *v27++;
      v30 = v28++;
      sprintf((char *)v43, "ASIC-%03d [%.2f] ", v30, v29);
      strcat(s, (const char *)v43);
    }
    while ( v28 != v37 * chain_domain_num );
  }
  puts(s);
  usleep(0x7A120u);
  return 0;
}
