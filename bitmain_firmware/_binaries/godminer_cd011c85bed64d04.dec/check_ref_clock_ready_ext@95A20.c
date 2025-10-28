int __fastcall check_ref_clock_ready_ext(int a1, int a2, _BYTE *a3, int a4, int a5)
{
  int v7; // r0
  int v8; // r0
  int *v9; // r12
  int v10; // r3
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // r0
  _DWORD *v15; // r7
  int v16; // r3
  char *v17; // r4
  _BYTE *v18; // r3
  int v19; // r0
  int v20; // r5
  int v21; // r0
  int v22; // r0
  int v23; // r12
  int v24; // r2
  _BYTE *v25; // r10
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int result; // r0
  int k; // r3
  int v31; // r0
  int v32; // r0
  int v33; // [sp+38h] [bp-107Ch]
  _BYTE *v34; // [sp+3Ch] [bp-1078h]
  int v35; // [sp+48h] [bp-106Ch]
  unsigned __int8 j; // [sp+4Ch] [bp-1068h]
  char *ptr; // [sp+54h] [bp-1060h]
  int v39; // [sp+58h] [bp-105Ch]
  int i; // [sp+5Ch] [bp-1058h]
  int v41; // [sp+60h] [bp-1054h] BYREF
  char v42[32]; // [sp+70h] [bp-1044h] BYREF
  int v43; // [sp+90h] [bp-1024h] BYREF
  _BYTE var1004[4112]; // [sp+B0h] [bp-1004h] BYREF

  V_LOCK(a1);
  v7 = logfmt_raw((int)var1004, 0x1000u);
  V_UNLOCK(v7);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "check_ref_clock_ready_ext",
    25,
    8716,
    60,
    var1004);
  v8 = sub_5C910(a1, 112, 0);
  if ( a3 == (_BYTE *)255 )
  {
    v10 = (int)&unk_139948;
    v39 = 14;
    v9 = &v41;
  }
  else
  {
    v10 = 1;
    v39 = 1;
  }
  if ( a3 == (_BYTE *)255 )
  {
    v8 = *(_DWORD *)v10;
    v11 = *(_DWORD *)(v10 + 4);
    v12 = *(_DWORD *)(v10 + 8);
    v13 = *(_DWORD *)(v10 + 12);
    *v9 = v8;
    v9[1] = v11;
    v9[2] = v12;
    *((_WORD *)v9 + 6) = v13;
  }
  for ( i = 0; i != 3; ++i )
  {
    V_LOCK(v8);
    v14 = logfmt_raw((int)var1004, 0x1000u);
    V_UNLOCK(v14);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      "check_ref_clock_ready_ext",
      25,
      8725,
      60,
      var1004);
    ptr = (char *)malloc(0x600u);
    v15 = malloc(0x600u);
    v16 = 0;
    for ( j = 0; j < v39; v16 = ++j )
    {
      v17 = ptr;
      if ( a3 == (_BYTE *)255 )
        v18 = &var1004[v16];
      else
        v18 = a3;
      if ( a3 == (_BYTE *)255 )
        v18 = (_BYTE *)(unsigned __int8)*(v18 - 80);
      v34 = v18;
      v35 = (unsigned __int16)v18;
      v19 = sub_5CBD4(a1, (unsigned __int16)v18, 112, ptr);
      v33 = v19;
      if ( v19 > 0 )
      {
        v20 = 0;
        do
        {
          if ( (*(_DWORD *)v17 & 0x9000000) != 0x9000000 )
          {
            if ( a5 )
              v34[16 * v20 + a5] = 1;
            V_LOCK(v19);
            V_INT((int)&v43, "chain");
            v21 = logfmt_raw((int)var1004, 0x1000u);
            V_UNLOCK(v21);
            v22 = g_zc;
            v23 = 100;
            v24 = 8759;
            goto LABEL_18;
          }
          if ( a5 )
          {
            v25 = &v34[a5];
            v34[16 * v20 + a5] = 0;
            V_LOCK(v19);
            v26 = logfmt_raw((int)var1004, 0x1000u);
            V_UNLOCK(v26);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/backend_eth/backend_eth.c",
              154,
              "check_ref_clock_ready_ext",
              25,
              8740,
              20,
              var1004);
            v27 = sub_5CDF4(a1, v17[4], v35, 113, v15);
            if ( !v27 || *v15 == -1 )
            {
              v25[16 * v20] = 0;
LABEL_36:
              V_LOCK(v27);
              v31 = logfmt_raw((int)var1004, 0x1000u);
              V_UNLOCK(v31);
              v22 = g_zc;
              v23 = 20;
              v24 = 8752;
              goto LABEL_18;
            }
            v25[16 * v20] = 1;
          }
          else
          {
            V_LOCK(v19);
            v32 = logfmt_raw((int)var1004, 0x1000u);
            V_UNLOCK(v32);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/backend_eth/backend_eth.c",
              154,
              "check_ref_clock_ready_ext",
              25,
              8740,
              20,
              var1004);
            v27 = sub_5CDF4(a1, v17[4], v35, 113, v15);
            if ( !v27 || *v15 == -1 )
              goto LABEL_36;
          }
          V_LOCK(v27);
          V_INT((int)v42, "chain");
          v28 = logfmt_raw((int)var1004, 0x1000u);
          V_UNLOCK(v28);
          v22 = g_zc;
          v23 = 100;
          v24 = 8747;
LABEL_18:
          ++v20;
          v17 += 12;
          v19 = zlog(
                  v22,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godm"
                  "iner-origin_master/backend/backend_eth/backend_eth.c",
                  154,
                  "check_ref_clock_ready_ext",
                  25,
                  v24,
                  v23,
                  var1004);
        }
        while ( v33 != v20 );
      }
    }
    free(ptr);
    free(v15);
  }
  result = a5;
  if ( a5 )
  {
    while ( 2 )
    {
      for ( k = 0; k != 16; ++k )
      {
        if ( (k & 0xFFFFFFF7) != 4 && *(_BYTE *)(result + k) )
          return -1;
      }
      result += 16;
      if ( a5 + 128 != result )
        continue;
      break;
    }
    return 0;
  }
  return result;
}
