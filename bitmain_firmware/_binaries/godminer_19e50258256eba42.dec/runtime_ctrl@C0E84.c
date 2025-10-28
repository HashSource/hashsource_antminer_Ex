_DWORD *__fastcall runtime_ctrl(int a1)
{
  _BYTE v3[8]; // [sp+1Ch] [bp-1008h] BYREF
  _DWORD *v4; // [sp+101Ch] [bp-8h]

  v4 = 0;
  switch ( a1 )
  {
    case 1:
      v4 = runtime_ctrl_ckb_2042();
      break;
    case 2:
      v4 = runtime_ctrl_kda_2110();
      break;
    case 3:
      v4 = runtime_ctrl_hns_2130();
      break;
    case 4:
      v4 = runtime_ctrl_dcr_1727();
      break;
    case 5:
      v4 = runtime_ctrl_dash_1766();
      break;
    case 7:
      v4 = runtime_ctrl_eth_2282();
      break;
    case 8:
      v4 = runtime_ctrl_ltc_1489();
      break;
    case 9:
      v4 = runtime_ctrl_zec_1746();
      break;
    case 10:
      v4 = runtime_ctrl_rvn_2044();
      break;
    case 11:
      v4 = runtime_ctrl_kas_2380();
      break;
    case 12:
      v4 = runtime_ctrl_ks5_2382();
      break;
    default:
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, "ALGO %d does not define backend_runtime", a1);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_interface.c",
        155,
        "runtime_ctrl",
        12,
        65,
        100,
        v3);
      break;
  }
  if ( v4 )
  {
    pthread_mutex_lock(&stru_5BAB0C);
    dword_5BAA08[dword_5BAB08] = v4;
    v4[66] = dword_5BAB08++;
    pthread_mutex_unlock(&stru_5BAB0C);
  }
  return v4;
}
