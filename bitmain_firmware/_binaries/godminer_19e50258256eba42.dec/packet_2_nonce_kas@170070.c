int __fastcall packet_2_nonce_kas(int a1, unsigned __int8 *a2, int a3, _BYTE *a4, void *dest, _DWORD *a6, _DWORD *a7)
{
  int v8; // r1
  int v9; // r2
  int *v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // r1
  int v14; // r0
  int v15; // r1
  _QWORD v19[512]; // [sp+58h] [bp-106Ch] BYREF
  _DWORD v20[7]; // [sp+1058h] [bp-6Ch] BYREF
  int v21; // [sp+1074h] [bp-50h]
  int v22; // [sp+1078h] [bp-4Ch]
  unsigned __int8 v23; // [sp+107Fh] [bp-45h]
  int v24; // [sp+1080h] [bp-44h]
  unsigned __int16 v25; // [sp+1084h] [bp-40h]
  unsigned __int16 v26; // [sp+1086h] [bp-3Eh]
  __int16 v27; // [sp+1088h] [bp-3Ch]
  char v28; // [sp+108Ah] [bp-3Ah]
  unsigned __int8 v29; // [sp+108Bh] [bp-39h]
  unsigned __int8 *v30; // [sp+108Ch] [bp-38h]
  int v31; // [sp+1090h] [bp-34h]
  int k; // [sp+1094h] [bp-30h]
  int j; // [sp+1098h] [bp-2Ch]
  int i; // [sp+109Ch] [bp-28h]
  unsigned __int64 v35; // [sp+10A0h] [bp-24h]

  v31 = a3;
  v30 = a2;
  v29 = 0;
  v28 = 0;
  v27 = 12;
  v26 = BM_CRC5(a2 + 2, 0x5Bu);
  v25 = v30[13] & 0x1F;
  if ( (v30[13] & 0x80u) == 0 )
    return 10;
  if ( v26 == v25 || !*(_BYTE *)(a1 + 279) )
  {
    v24 = *(_DWORD *)(a1 + 864);
    v23 = v30[12];
    if ( (v23 & 0x80u) == 0 )
    {
      v10 = (int *)(v24 + 8 * v23);
      v11 = *v10;
      v12 = v10[1];
      v13 = v31;
      *(_DWORD *)v31 = v11;
      *(_DWORD *)(v13 + 4) = v12;
      *a7 = *(_DWORD *)(v24 + 8 * v23);
      if ( *a7 == -1 )
      {
        V_LOCK();
        logfmt_raw(v19, 0x1000u, 0, "chip respond wrong work id ,err");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
          171,
          "packet_2_nonce_kas",
          18,
          291,
          20,
          v19);
        return 12;
      }
      else
      {
        memcpy((void *)(v31 + 26), v30 + 3, 8u);
        memcpy((void *)(v31 + 18), (const void *)(v24 + 8 * (v23 + 128)), 8u);
        *(_BYTE *)(v31 + 17) = v30[11];
        *(_BYTE *)(v31 + 16) = v23;
        v29 = (unsigned int)v30[6] / *(_DWORD *)(a1 + 468);
        if ( v29 >= *(int *)(a1 + 372) )
        {
          v14 = rand();
          sub_34514C(v14, *(_DWORD *)(a1 + 372));
          *a6 = v15;
        }
        else
        {
          *a6 = v29;
        }
        *(_DWORD *)(v31 + 8) = *a6;
        *(_DWORD *)(v31 + 12) = v30[10] & 0x7F;
        memcpy(dest, (const void *)(v31 + 26), 8u);
        *a4 = 1;
        v35 = 0;
        memset(v19, 0, 0x800u);
        v22 = *(_DWORD *)(a1 + 264);
        if ( ++dword_C15738[*(_DWORD *)(a1 + 264)] == 1000 )
        {
          dword_C15738[*(_DWORD *)(a1 + 264)] = 0;
          for ( i = 0; i < *(_DWORD *)(a1 + 372); ++i )
          {
            v35 += *(_QWORD *)(*(_DWORD *)(a1 + 496) + 48 * i);
            v35 += *(_QWORD *)(*(_DWORD *)(a1 + 496) + 48 * i + 8);
            v19[i] += *(_QWORD *)(*(_DWORD *)(a1 + 496) + 48 * i + 16);
            v19[i] += *(_QWORD *)(*(_DWORD *)(a1 + 496) + 48 * i + 32);
          }
          if ( v35 > qword_C15778[*(_DWORD *)(a1 + 264)] && v35 - qword_C15778[*(_DWORD *)(a1 + 264)] <= 0x63 )
          {
            for ( j = 0; j < *(_DWORD *)(a1 + 372); ++j )
            {
              if ( v19[j] > qword_C157F8[256 * *(_DWORD *)(a1 + 264) + j]
                && v19[j] - qword_C157F8[256 * *(_DWORD *)(a1 + 264) + j] > 0x190u )
              {
                close_one_chip_cores_kas(a1, j);
              }
            }
          }
          for ( k = 0; k < *(_DWORD *)(a1 + 372); ++k )
            qword_C157F8[256 * *(_DWORD *)(a1 + 264) + k] = v19[k];
          qword_C15778[*(_DWORD *)(a1 + 264)] = v35;
        }
        return 0;
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(v19, 0x1000u, 0, "chip respond wrong work id ,err");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
        171,
        "packet_2_nonce_kas",
        18,
        284,
        20,
        v19);
      return 12;
    }
  }
  else
  {
    v8 = *(_DWORD *)(a1 + 272);
    v9 = dword_C1572C[v8];
    dword_C1572C[v8] = v9 + 1;
    if ( v9 <= 9 )
    {
      V_LOCK();
      sub_1622D8((int)v20, *(int *)(a1 + 272));
      logfmt_raw(
        v19,
        0x1000u,
        0,
        v21,
        v20[0],
        v20[1],
        v20[2],
        v20[3],
        v20[4],
        v20[5],
        v20[6],
        v21,
        "chip id %2d, get nonce crc error calc value %04x expected value %04x",
        v29,
        v26,
        v25);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
        171,
        "packet_2_nonce_kas",
        18,
        275,
        40,
        v19);
    }
    return 11;
  }
}
