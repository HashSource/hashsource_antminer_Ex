int __fastcall runtime_ctrl(int a1)
{
  int v1; // r5
  int v2; // r3
  char *v3; // r2
  int v5; // r0
  _BYTE v6[4100]; // [sp+18h] [bp-1004h] BYREF

  switch ( a1 )
  {
    case 1:
      v1 = runtime_ctrl_ckb_2042();
      goto LABEL_3;
    case 2:
      v1 = runtime_ctrl_kda_2110();
      goto LABEL_3;
    case 3:
      v1 = runtime_ctrl_hns_2130();
      goto LABEL_3;
    case 4:
      v1 = runtime_ctrl_dcr_1727();
      goto LABEL_3;
    case 5:
      v1 = runtime_ctrl_dash_1766();
      goto LABEL_3;
    case 6:
      v1 = runtime_ctrl_eth_2280();
      goto LABEL_3;
    case 8:
      v1 = runtime_ctrl_ltc_1489();
      goto LABEL_3;
    case 9:
      v1 = runtime_ctrl_zec_1746();
      goto LABEL_3;
    case 10:
      v1 = runtime_ctrl_rvn_2020();
      goto LABEL_3;
    case 11:
      v1 = runtime_ctrl_kas_2380();
LABEL_3:
      if ( v1 )
      {
        pthread_mutex_lock(&stru_185100);
        v2 = dword_185118;
        v3 = &stru_185100.__size[4 * dword_185118++];
        *((_DWORD *)v3 + 7) = v1;
        *(_DWORD *)(v1 + 220) = v2;
        pthread_mutex_unlock(&stru_185100);
      }
      break;
    default:
      V_LOCK(a1);
      v1 = 0;
      v5 = logfmt_raw((int)v6, 0x1000u);
      V_UNLOCK(v5);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/backend_interface.c",
        158,
        "runtime_ctrl",
        12,
        62,
        100,
        v6);
      break;
  }
  return v1;
}
