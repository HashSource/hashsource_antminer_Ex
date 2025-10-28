int __fastcall div2_seq(int a1, int a2, unsigned __int8 a3, int a4)
{
  int v7; // r0
  int v8; // r7
  int v9; // r8
  int v10; // r10
  int v11; // r9
  int v12; // r11
  int v13; // r6
  _BYTE v15[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK(a1);
  v7 = logfmt_raw((int)v15, 0x1000u);
  V_UNLOCK(v7);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "div2_seq",
    8u,
    9725,
    60,
    v15);
  if ( a4 == 8 )
  {
    v13 = 61578;
    v12 = 61582;
    v11 = 61581;
    v10 = 61580;
    v9 = 61579;
    v8 = 61441;
  }
  else
  {
    v8 = (unsigned __int16)((_WORD)a4 << 12) | 1;
    v9 = (unsigned __int16)((_WORD)a4 << 12) | 0x8B;
    v10 = (unsigned __int16)((_WORD)a4 << 12) | 0x8C;
    v11 = (unsigned __int16)((_WORD)a4 << 12) | 0x8D;
    v12 = (unsigned __int16)((_WORD)a4 << 12) | 0x8E;
    v13 = (unsigned __int16)((_WORD)a4 << 12) | 0x8A;
  }
  sub_5E0B4(a1, a3, v8, 0xFFFF);
  sub_5E0B4(a1, a3, v9, -859045888);
  sub_5E0B4(a1, a3, v8, -65536);
  sub_5E0B4(a1, a3, v10, 52428);
  sub_5E0B4(a1, a3, v8, (int)&loc_FFFFC + 3);
  sub_5E0B4(a1, a3, v10, -859832320);
  sub_5E0B4(a1, a3, v8, -1048576);
  sub_5E0B4(a1, a3, v11, (int)&loc_CCCCC);
  sub_5E0B4(a1, a3, v8, 0xFFFFFF);
  sub_5E0B4(a1, a3, v11, -872415232);
  sub_5E0B4(a1, a3, v8, -16777216);
  sub_5E0B4(a1, a3, v12, 13421772);
  sub_5E0B4(a1, a3, v8, 4095);
  sub_5E0B4(a1, a3, v13, -858996736);
  sub_5E0B4(a1, a3, v8, -4096);
  sub_5E0B4(a1, a3, v9, 3276);
  sub_5E0B4(a1, a3, v8, 0);
  sub_5C968(a1, a3, 144, 0);
  sub_5C968(a1, a3, 145, -2147450879);
  sub_5C968(a1, a3, 144, 0);
  sub_5C968(a1, a3, 145, -2147442687);
  return 0;
}
