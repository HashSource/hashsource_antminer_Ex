int __fastcall sweep_eeprom_write_etc_2282(int a1)
{
  int result; // r0
  char *v2; // r2
  int v3; // r4
  char *v4; // r2
  int v5; // r5
  double v6; // r0
  int v7; // r0
  int v8; // [sp+2Ch] [bp-1428h]
  _BYTE v10[16]; // [sp+44h] [bp-1410h] BYREF
  _BYTE v11[16]; // [sp+1044h] [bp-410h] BYREF
  unsigned __int8 v12; // [sp+1062h] [bp-3F2h]
  unsigned __int8 v13; // [sp+1065h] [bp-3EFh]
  _DWORD v14[2]; // [sp+1088h] [bp-3CCh] BYREF
  _WORD v15[126]; // [sp+1090h] [bp-3C4h] BYREF
  _BYTE s[252]; // [sp+118Ch] [bp-2C8h] BYREF
  _DWORD v17[7]; // [sp+1288h] [bp-1CCh] BYREF
  int v18; // [sp+12A4h] [bp-1B0h]
  _DWORD v19[7]; // [sp+12A8h] [bp-1ACh] BYREF
  int v20; // [sp+12C4h] [bp-190h]
  _DWORD v21[7]; // [sp+12C8h] [bp-18Ch] BYREF
  int v22; // [sp+12E4h] [bp-170h]
  _DWORD v23[7]; // [sp+12E8h] [bp-16Ch] BYREF
  int v24; // [sp+1304h] [bp-150h]
  _DWORD v25[7]; // [sp+1308h] [bp-14Ch] BYREF
  int v26; // [sp+1324h] [bp-130h]
  _DWORD v27[7]; // [sp+1328h] [bp-12Ch] BYREF
  int v28; // [sp+1344h] [bp-110h]
  _DWORD v29[7]; // [sp+1348h] [bp-10Ch] BYREF
  int v30; // [sp+1364h] [bp-F0h]
  _DWORD v31[7]; // [sp+1368h] [bp-ECh] BYREF
  int v32; // [sp+1384h] [bp-D0h]
  _DWORD v33[7]; // [sp+1388h] [bp-CCh] BYREF
  int v34; // [sp+13A4h] [bp-B0h]
  _DWORD v35[7]; // [sp+13A8h] [bp-ACh] BYREF
  int v36; // [sp+13C4h] [bp-90h]
  _DWORD v37[7]; // [sp+13C8h] [bp-8Ch] BYREF
  int v38; // [sp+13E4h] [bp-70h]
  _DWORD v39[7]; // [sp+13E8h] [bp-6Ch] BYREF
  int v40; // [sp+1404h] [bp-50h]
  _DWORD v41[7]; // [sp+1408h] [bp-4Ch] BYREF
  int v42; // [sp+1424h] [bp-30h]
  int i; // [sp+142Ch] [bp-28h]
  int j; // [sp+1430h] [bp-24h]
  int m; // [sp+1434h] [bp-20h]
  int k; // [sp+1438h] [bp-1Ch]
  char v47; // [sp+143Eh] [bp-16h]
  unsigned __int8 v48; // [sp+143Fh] [bp-15h]
  int n; // [sp+1440h] [bp-14h]
  int ii; // [sp+1444h] [bp-10h]

  memset(v15, 0, 0xFAu);
  v14[0] = 0;
  LOWORD(v14[1]) = 0;
  memset(s, 0, 0xFAu);
  if ( eeprom_read(*(_DWORD *)(a1 + 272), 0, (int)s, 0x72u) )
  {
    V_LOCK();
    sub_FBD60((int)v17, *(int *)(a1 + 272));
    logfmt_raw(
      v10,
      0x1000u,
      0,
      v18,
      v17[0],
      v17[1],
      v17[2],
      v17[3],
      v17[4],
      v17[5],
      v17[6],
      v18,
      "[%s] Read EEPROM pt2 raw data failed!",
      "sweep_eeprom_write_etc_2282");
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer"
             "-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
             171,
             "sweep_eeprom_write_etc_2282",
             27,
             330,
             100,
             v10);
  }
  else if ( eeprom_decode_fixture_info(s, (char *)v15) )
  {
    V_LOCK();
    sub_FBD60((int)v19, *(int *)(a1 + 272));
    logfmt_raw(
      v10,
      0x1000u,
      0,
      v20,
      v19[0],
      v19[1],
      v19[2],
      v19[3],
      v19[4],
      v19[5],
      v19[6],
      v20,
      "[%s] EEPROM pt2 Data decode failed!",
      "sweep_eeprom_write_etc_2282");
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer"
             "-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
             171,
             "sweep_eeprom_write_etc_2282",
             27,
             336,
             100,
             v10);
  }
  else
  {
    for ( i = 0; i <= 113; ++i )
    {
      V_LOCK();
      sub_FBD60((int)v21, *(int *)(a1 + 272));
      logfmt_raw(
        v10,
        0x1000u,
        0,
        v22,
        v21[0],
        v21[1],
        v21[2],
        v21[3],
        v21[4],
        v21[5],
        v21[6],
        v22,
        "decode_buffer for pt2[%d]: %x",
        i,
        *((unsigned __int8 *)v15 + i));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
        171,
        "sweep_eeprom_write_etc_2282",
        27,
        341,
        20,
        v10);
    }
    v48 = BM_CRC5_0(v15, 0x388u);
    v47 = HIBYTE(v15[56]);
    if ( v48 == HIBYTE(v15[56]) )
    {
      result = init_eeprom_fmt_info(v11, 4);
      if ( (unsigned __int8)result == 1 )
      {
        for ( j = 0; j <= 5; ++j )
          *((_BYTE *)v14 + j) = sweep_freq_0[6 * *(_DWORD *)(a1 + 272) + j];
        HIBYTE(v15[0]) = -6;
        LOBYTE(v15[1]) = 4;
        v2 = (char *)v15 + v12;
        *(_DWORD *)v2 = v14[0];
        *((_WORD *)v2 + 2) = v14[1];
        v3 = v13;
        *((_BYTE *)v15 + v3) = BM_CRC5_0(v15, 0x7C8u);
        for ( k = 0; k <= 249; ++k )
        {
          V_LOCK();
          sub_FBD60((int)v25, *(int *)(a1 + 272));
          logfmt_raw(
            v10,
            0x1000u,
            0,
            v26,
            v25[0],
            v25[1],
            v25[2],
            v25[3],
            v25[4],
            v25[5],
            v25[6],
            v26,
            "sweep data_src[%d]: before decode %x",
            k,
            *((unsigned __int8 *)v15 + k));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
            171,
            "sweep_eeprom_write_etc_2282",
            27,
            367,
            20,
            v10);
        }
        if ( (unsigned __int8)data_enc((unsigned int *)&v15[1], 0xF8u, 1u, 1u) != 1 )
        {
          V_LOCK();
          sub_FBD60((int)v27, *(int *)(a1 + 272));
          logfmt_raw(
            v10,
            0x1000u,
            0,
            v28,
            v27[0],
            v27[1],
            v27[2],
            v27[3],
            v27[4],
            v27[5],
            v27[6],
            v28,
            "[%s] EEPROM sweep data encrypt failed!",
            "sweep_eeprom_write_etc_2282");
          V_UNLOCK();
          return zlog(
                   g_zc,
                   "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/go"
                   "dminer-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                   171,
                   "sweep_eeprom_write_etc_2282",
                   27,
                   371,
                   100,
                   v10);
        }
        else
        {
          for ( m = 0; m <= 249; ++m )
          {
            V_LOCK();
            sub_FBD60((int)v29, *(int *)(a1 + 272));
            logfmt_raw(
              v10,
              0x1000u,
              0,
              v30,
              v29[0],
              v29[1],
              v29[2],
              v29[3],
              v29[4],
              v29[5],
              v29[6],
              v30,
              "sweep data_src[%d]: after decode %x",
              m,
              *((unsigned __int8 *)v15 + m));
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
              171,
              "sweep_eeprom_write_etc_2282",
              27,
              376,
              20,
              v10);
          }
          eeprom_write(*(_DWORD *)(a1 + 272), 0, (int)v15, 0xFAu);
          memset(s, 0, 0xFAu);
          memset(v15, 0, 0xFAu);
          if ( eeprom_read(*(_DWORD *)(a1 + 272), 0, (int)s, 0xFAu) )
          {
            V_LOCK();
            sub_FBD60((int)v31, *(int *)(a1 + 272));
            logfmt_raw(
              v10,
              0x1000u,
              0,
              v32,
              v31[0],
              v31[1],
              v31[2],
              v31[3],
              v31[4],
              v31[5],
              v31[6],
              v32,
              "[%s] Read sweep EEPROM raw data failed!",
              "sweep_eeprom_write_etc_2282");
            V_UNLOCK();
            return zlog(
                     g_zc,
                     "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/"
                     "godminer-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                     171,
                     "sweep_eeprom_write_etc_2282",
                     27,
                     384,
                     100,
                     v10);
          }
          else if ( eeprom_decode_fixture_info(s, (char *)v15) )
          {
            V_LOCK();
            sub_FBD60((int)v33, *(int *)(a1 + 272));
            logfmt_raw(
              v10,
              0x1000u,
              0,
              v34,
              v33[0],
              v33[1],
              v33[2],
              v33[3],
              v33[4],
              v33[5],
              v33[6],
              v34,
              "[%s] EEPROM sweep Data decode failed!",
              "sweep_eeprom_write_etc_2282");
            V_UNLOCK();
            return zlog(
                     g_zc,
                     "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/"
                     "godminer-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                     171,
                     "sweep_eeprom_write_etc_2282",
                     27,
                     390,
                     100,
                     v10);
          }
          else
          {
            for ( n = 0; n <= 249; ++n )
            {
              V_LOCK();
              sub_FBD60((int)v35, *(int *)(a1 + 272));
              logfmt_raw(
                v10,
                0x1000u,
                0,
                v36,
                v35[0],
                v35[1],
                v35[2],
                v35[3],
                v35[4],
                v35[5],
                v35[6],
                v36,
                "decode_buffer for sweep[%d]: %x",
                n,
                (unsigned __int8)s[n]);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                171,
                "sweep_eeprom_write_etc_2282",
                27,
                395,
                20,
                v10);
            }
            v48 = BM_CRC5_0(v15, 0x7C8u);
            v47 = HIBYTE(v15[124]);
            if ( v48 == HIBYTE(v15[124]) )
            {
              memset(v14, 0, 6u);
              v4 = (char *)v15 + v12;
              v14[0] = *(_DWORD *)v4;
              LOWORD(v14[1]) = *((_WORD *)v4 + 2);
              for ( ii = 0; ii <= 5; ++ii )
              {
                V_LOCK();
                sub_FBD60((int)v39, *(int *)(a1 + 272));
                logfmt_raw(
                  v10,
                  0x1000u,
                  0,
                  v40,
                  v39[0],
                  v39[1],
                  v39[2],
                  v39[3],
                  v39[4],
                  v39[5],
                  v39[6],
                  v40,
                  "[%s] sweep_asic_result for chip-%d: %f!",
                  "sweep_eeprom_write_etc_2282",
                  ii,
                  v8,
                  (float)((float)((float)*((unsigned __int8 *)v14 + ii) * 12.5) + 400.0));
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/god"
                  "miner-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                  171,
                  "sweep_eeprom_write_etc_2282",
                  27,
                  410,
                  100,
                  v10);
              }
              V_LOCK();
              sub_FBD60((int)v41, *(int *)(a1 + 272));
              v5 = *(_DWORD *)(a1 + 272);
              LODWORD(v6) = a1;
              v7 = sub_109638(v6);
              logfmt_raw(
                v10,
                0x1000u,
                0,
                v42,
                v41[0],
                v41[1],
                v41[2],
                v41[3],
                v41[4],
                v41[5],
                v41[6],
                v42,
                "[%s] hashrate for chain-%d: %uM",
                "sweep_eeprom_write_etc_2282",
                v5,
                v7);
              V_UNLOCK();
              return zlog(
                       g_zc,
                       "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/buil"
                       "d/godminer-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                       171,
                       "sweep_eeprom_write_etc_2282",
                       27,
                       414,
                       100,
                       v10);
            }
            else
            {
              V_LOCK();
              sub_FBD60((int)v37, *(int *)(a1 + 272));
              logfmt_raw(
                v10,
                0x1000u,
                0,
                v38,
                v37[0],
                v37[1],
                v37[2],
                v37[3],
                v37[4],
                v37[5],
                v37[6],
                v38,
                "[%s] EEPROM sweep Data crc check failed!",
                "sweep_eeprom_write_etc_2282");
              V_UNLOCK();
              return zlog(
                       g_zc,
                       "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/buil"
                       "d/godminer-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                       171,
                       "sweep_eeprom_write_etc_2282",
                       27,
                       402,
                       100,
                       v10);
            }
          }
        }
      }
    }
    else
    {
      V_LOCK();
      sub_FBD60((int)v23, *(int *)(a1 + 272));
      logfmt_raw(
        v10,
        0x1000u,
        0,
        v24,
        v23[0],
        v23[1],
        v23[2],
        v23[3],
        v23[4],
        v23[5],
        v23[6],
        v24,
        "[%s] EEPROM Data pt2 crc check failed!",
        "sweep_eeprom_write_etc_2282");
      V_UNLOCK();
      return zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmin"
               "er-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
               171,
               "sweep_eeprom_write_etc_2282",
               27,
               348,
               100,
               v10);
    }
  }
  return result;
}
