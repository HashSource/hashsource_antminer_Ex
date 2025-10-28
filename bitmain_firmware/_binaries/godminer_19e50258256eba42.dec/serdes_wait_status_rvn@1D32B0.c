int __fastcall serdes_wait_status_rvn(int a1, int a2, unsigned __int8 a3, unsigned __int16 a4, int a5)
{
  _BYTE v11[36]; // [sp+40h] [bp-1064h] BYREF
  _DWORD v12[7]; // [sp+1040h] [bp-64h] BYREF
  int v13; // [sp+105Ch] [bp-48h]
  _DWORD v14[7]; // [sp+1060h] [bp-44h] BYREF
  int v15; // [sp+107Ch] [bp-28h]
  int v16; // [sp+1084h] [bp-20h]
  void *ptr; // [sp+1088h] [bp-1Ch]
  int i; // [sp+108Ch] [bp-18h]
  int v19; // [sp+1090h] [bp-14h]
  char v20; // [sp+1097h] [bp-Dh]

  v20 = 5;
  ptr = malloc(0x1800u);
  while ( v20-- )
  {
    sub_1D0F04(a1, a3, 78, a4 | 0x310000);
    v16 = sub_1D13F0(a1, a3, 79, ptr);
    if ( !v16 )
    {
      free(ptr);
      return 22;
    }
    for ( i = 0; i < v16; ++i )
    {
      if ( a3 != 255 || a5 == *((_DWORD *)ptr + 3 * i) )
      {
        if ( a3 == *((unsigned __int8 *)ptr + 12 * i + 8) && a5 != *((_DWORD *)ptr + 3 * i) )
        {
          ++v19;
          V_LOCK();
          sub_1C61DC((int)v14, *(int *)(a1 + 272));
          logfmt_raw(
            v11,
            0x1000u,
            0,
            v15,
            v14[0],
            v14[1],
            v14[2],
            v14[3],
            v14[4],
            v14[5],
            v14[6],
            v15,
            "[PHY READ] core %02x apb_addr %04x rata %08x not equal to %08x",
            *((unsigned __int8 *)ptr + 12 * i + 8),
            a4,
            *((_DWORD *)ptr + 3 * i),
            a5);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
            174,
            "serdes_wait_status_rvn",
            22,
            125,
            60,
            v11);
        }
      }
      else
      {
        ++v19;
        V_LOCK();
        sub_1C61DC((int)v12, *(int *)(a1 + 272));
        logfmt_raw(
          v11,
          0x1000u,
          0,
          v13,
          v12[0],
          v12[1],
          v12[2],
          v12[3],
          v12[4],
          v12[5],
          v12[6],
          v13,
          "[PHY READ] core %02x apb_addr %04x rata %08x not equal to %08x",
          *((unsigned __int8 *)ptr + 12 * i + 8),
          a4,
          *((_DWORD *)ptr + 3 * i),
          a5);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
          174,
          "serdes_wait_status_rvn",
          22,
          119,
          60,
          v11);
      }
    }
    if ( !v19 )
      break;
    v19 = 0;
    usleep(0xF4240u);
  }
  free(ptr);
  return 0;
}
