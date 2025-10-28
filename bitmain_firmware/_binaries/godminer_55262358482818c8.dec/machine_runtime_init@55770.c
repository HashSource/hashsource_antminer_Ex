_DWORD *__fastcall machine_runtime_init(int a1, int a2)
{
  int v3; // r3
  int v4; // r3
  int v5; // r1
  _DWORD *v6; // r6
  int v7; // r3
  int v8; // r3
  int v9; // r1
  char v11[4096]; // [sp+10h] [bp-1000h] BYREF

  switch ( a2 )
  {
    case 1:
      v6 = machine_runtime_ctrl_ckb_2042();
      break;
    case 2:
      v6 = machine_runtime_ctrl_kda_2110();
      break;
    case 3:
      v6 = machine_runtime_ctrl_hns_2130();
      break;
    case 4:
      v6 = machine_runtime_ctrl_dcr_1727();
      break;
    case 5:
      v6 = machine_runtime_ctrl_dash_1766();
      break;
    case 6:
      v6 = machine_runtime_ctrl_eth_2280();
      break;
    case 7:
      v6 = machine_runtime_ctrl_eth_2282();
      break;
    case 8:
      v6 = machine_runtime_ctrl_ltc_1489();
      break;
    case 9:
      v6 = machine_runtime_ctrl_zec_1746();
      break;
    case 10:
      v6 = machine_runtime_ctrl_rvn_2044();
      break;
    case 11:
      v6 = machine_runtime_ctrl_kas_2380();
      break;
    case 12:
      v6 = machine_runtime_ctrl_ks5_2382();
      break;
    default:
      V_LOCK();
      LOWORD(v3) = -13072;
      HIWORD(v3) = (unsigned int)"machine_runtime_init" >> 16;
      logfmt_raw(v11, 0x1000u, 0, v3, a2);
      V_UNLOCK();
      LOWORD(v4) = -13096;
      LOWORD(v5) = -13044;
      HIWORD(v4) = (unsigned int)"1 BIN4" >> 16;
      HIWORD(v5) = (unsigned int)"support miner type: %d" >> 16;
      zlog(g_zc, v5, 174, v4, 20, 69, 100, v11);
      MEMORY[0x48] = 0;
      __und(0);
  }
  v6[18] = a2;
  V_LOCK();
  LOWORD(v7) = -13060;
  HIWORD(v7) = (unsigned int)"ime_init" >> 16;
  logfmt_raw(v11, 0x1000u, 0, v7, a2);
  V_UNLOCK();
  LOWORD(v8) = -13096;
  LOWORD(v9) = -13044;
  HIWORD(v8) = (unsigned int)"1 BIN4" >> 16;
  HIWORD(v9) = (unsigned int)"support miner type: %d" >> 16;
  zlog(g_zc, v9, 174, v8, 20, 73, 40, v11);
  return v6;
}
