int __fastcall set_sweep_freq_ltc(int a1, float *a2)
{
  float v2; // s0
  int v4; // r0
  float v5; // s17
  float v6; // s15
  float *v7; // r0
  float *v8; // r3
  float *v9; // r2
  float v10; // s14
  int v11; // r3
  char *v12; // r9
  int v13; // r10
  int v14; // r8
  float *v15; // r11
  float v16; // s18
  float *v17; // r4
  float *v18; // r5
  int v19; // r6
  float v20; // s15
  int v21; // r2
  int v22; // r0
  float v23; // s16
  int v24; // r0
  int v26; // [sp+0h] [bp-123Ch] BYREF
  double v27; // [sp+8h] [bp-1234h]
  double v28; // [sp+10h] [bp-122Ch]
  double v29; // [sp+18h] [bp-1224h]
  int v30; // [sp+20h] [bp-121Ch]
  int v31; // [sp+28h] [bp-1214h]
  float *v32; // [sp+2Ch] [bp-1210h]
  int *v33; // [sp+30h] [bp-120Ch]
  const char *v34; // [sp+34h] [bp-1208h]
  char v35; // [sp+38h] [bp-1204h] BYREF
  _BYTE v36[4100]; // [sp+238h] [bp-1004h] BYREF

  v4 = *(_DWORD *)(a1 + 204);
  v5 = *(float *)(a1 + 768);
  v6 = 0.0;
  if ( v4 )
  {
    v7 = &a2[v4];
    v8 = a2;
    v9 = (float *)&v35;
    do
    {
      v10 = *v8++;
      *v9++ = v5;
      if ( v10 > v6 )
        v6 = v10;
    }
    while ( v8 != v7 );
  }
  v11 = (int)(((float)((float)(v6 - v5) + v2) - 0.001) / v2);
  if ( v11 > 0 )
  {
    v12 = (char *)((char *)(&v26 - 106) - (char *)a2);
    v13 = 1;
    v31 = v11 + 1;
    v33 = &g_zc;
    v32 = a2 + 120;
    v34 = "Chain [%d] set sweep %f, start_freq = %f, sweep_step %f, step_id %d ";
    do
    {
      v14 = 0;
      v15 = v32;
      v16 = (float)v13;
      do
      {
        v17 = v15 - 120;
        v18 = (float *)((int)v15 + (_DWORD)v12);
        v19 = v14;
        do
        {
          v20 = *v17;
          v21 = v19;
          v17 += 5;
          v22 = a1;
          v19 += 5;
          if ( v20 > *v18 )
          {
            v23 = v5 + (float)(v16 * v2);
            if ( v20 < v23 )
              v23 = v20;
            v22 = sweep_chip_setting_freq_ltc(a1, 0, v21);
            *v18 = v23;
          }
          v18 += 5;
        }
        while ( v15 != v17 );
        ++v14;
        ++v15;
      }
      while ( v14 != 5 );
      V_LOCK(v22);
      v26 = *(_DWORD *)(a1 + 144);
      v30 = v13++;
      v29 = v2;
      v28 = v5;
      v27 = (float)(v5 + (float)(v16 * v2));
      v24 = logfmt_raw((int)v36, 0x1000u);
      V_UNLOCK(v24);
      zlog(
        *v33,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_ltc/backend_ltc.c",
        154,
        "set_sweep_freq_ltc",
        18,
        714,
        20,
        v36);
    }
    while ( v13 != v31 );
  }
  usleep(0x7A120u);
  return 0;
}
