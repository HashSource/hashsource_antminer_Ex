int __fastcall sub_A3620(int a1, int a2)
{
  _DWORD *v3; // r9
  int v4; // r7
  int v5; // r0
  int v6; // r3
  int v7; // r0
  int v8; // r0
  int v9; // r2
  int v10; // r0
  int v11; // r0
  _DWORD *v12; // r7
  int v13; // r6
  int v14; // r0
  int v15; // r3
  int v16; // r0
  int v17; // r0
  int v18; // r2
  int v19; // r0
  int v20; // r0
  int v22; // r0
  int v23; // r0
  int v24; // [sp+14h] [bp-1108h]
  int v25; // [sp+18h] [bp-1104h]
  int v26; // [sp+1Ch] [bp-1100h]
  const char *v27; // [sp+20h] [bp-10FCh]
  int v28; // [sp+24h] [bp-10F8h]
  int v29; // [sp+28h] [bp-10F4h]
  int v30; // [sp+40h] [bp-10DCh]
  int v31; // [sp+40h] [bp-10DCh]
  int v32; // [sp+44h] [bp-10D8h]
  int v33; // [sp+44h] [bp-10D8h]
  _DWORD *v35; // [sp+4Ch] [bp-10D0h]
  int v36; // [sp+50h] [bp-10CCh] BYREF
  int v37; // [sp+54h] [bp-10C8h] BYREF
  _BYTE v38[20]; // [sp+58h] [bp-10C4h] BYREF
  int v39; // [sp+6Ch] [bp-10B0h]
  int v40; // [sp+70h] [bp-10ACh]
  int v41; // [sp+74h] [bp-10A8h]
  _DWORD v42[8]; // [sp+78h] [bp-10A4h] BYREF
  _BYTE v43[20]; // [sp+98h] [bp-1084h] BYREF
  int v44; // [sp+ACh] [bp-1070h]
  int v45; // [sp+B0h] [bp-106Ch]
  int v46; // [sp+B4h] [bp-1068h]
  int v47; // [sp+B8h] [bp-1064h] BYREF
  _BYTE v48[32]; // [sp+D8h] [bp-1044h] BYREF
  int v49; // [sp+F8h] [bp-1024h] BYREF
  _BYTE v50[4100]; // [sp+118h] [bp-1004h] BYREF

  v32 = *(_DWORD *)(a1 + 364);
  if ( v32 > 0 )
  {
    v3 = *(_DWORD **)(a1 + 356);
    v30 = 0;
    v35 = v3;
    do
    {
      v4 = 5;
      do
      {
        v5 = (*(int (__fastcall **)(int, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, int, int, const char *, int, int))(a1 + 152))(
               a1,
               &v37,
               &v36,
               *v3,
               v3[1],
               v3[2],
               v3[3],
               v3[4],
               v3[5],
               v24,
               v25,
               v26,
               v27,
               v28,
               v29);
        if ( v36 )
        {
          v6 = v37;
          if ( v37 >= -63 )
            goto LABEL_9;
          V_LOCK(v5);
          V_INT((int)v42, "chain");
          v28 = *v3;
          v27 = "sensor[%d] invalid temp, retry";
          v24 = v42[5];
          v25 = v42[6];
          v26 = v42[7];
          v7 = logfmt_raw((int)v50, 0x1000u);
          V_UNLOCK(v7);
          v8 = g_zc;
          v9 = 481;
        }
        else
        {
          V_LOCK(v5);
          V_INT((int)v38, "chain");
          v28 = *v3;
          v27 = "sensor[%d] read lost, retry";
          v24 = v39;
          v25 = v40;
          v26 = v41;
          v23 = logfmt_raw((int)v50, 0x1000u);
          V_UNLOCK(v23);
          v8 = g_zc;
          v9 = 479;
        }
        zlog(
          v8,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
          174,
          "read_temperature_zec_1746",
          25,
          v9,
          20,
          v50);
        v10 = usleep((__useconds_t)sub_30D40);
        --v4;
      }
      while ( v4 );
      v37 = -64;
      V_LOCK(v10);
      V_INT((int)v43, "chain");
      v29 = 5;
      v27 = "read sensor[%d] local temp failed after retry %d times";
      v28 = *v3;
      v24 = v44;
      v25 = v45;
      v26 = v46;
      v11 = logfmt_raw((int)v50, 0x1000u);
      V_UNLOCK(v11);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
        174,
        "read_temperature_zec_1746",
        25,
        489,
        100,
        v50);
      v6 = v37;
LABEL_9:
      v3 += 6;
      *(_DWORD *)(a2 + 8 * v30++) = v6;
    }
    while ( v32 != v30 );
    v12 = v35;
    v31 = a2;
    v33 = a2 + 8 * v32;
    do
    {
      v13 = 5;
      do
      {
        v14 = (*(int (__fastcall **)(int, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(a1 + 156))(
                a1,
                &v37,
                &v36,
                *v12,
                v12[1],
                v12[2],
                v12[3],
                v12[4],
                v12[5]);
        if ( v36 )
        {
          v15 = v37;
          if ( v37 >= -63 )
            goto LABEL_17;
          V_LOCK(v14);
          V_INT((int)v48, "chain");
          v16 = logfmt_raw((int)v50, 0x1000u);
          V_UNLOCK(v16);
          v17 = g_zc;
          v18 = 503;
        }
        else
        {
          V_LOCK(v14);
          V_INT((int)&v47, "chain");
          v22 = logfmt_raw((int)v50, 0x1000u);
          V_UNLOCK(v22);
          v17 = g_zc;
          v18 = 501;
        }
        zlog(
          v17,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
          174,
          "read_temperature_zec_1746",
          25,
          v18,
          20,
          v50);
        v19 = usleep((__useconds_t)sub_30D40);
        --v13;
      }
      while ( v13 );
      v37 = -64;
      V_LOCK(v19);
      V_INT((int)&v49, "chain");
      v20 = logfmt_raw((int)v50, 0x1000u);
      V_UNLOCK(v20);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
        174,
        "read_temperature_zec_1746",
        25,
        511,
        100,
        v50);
      v15 = v37;
LABEL_17:
      v12 += 6;
      *(_DWORD *)(v31 + 4) = v15;
      v31 += 8;
    }
    while ( v33 != v31 );
  }
  return 0;
}
