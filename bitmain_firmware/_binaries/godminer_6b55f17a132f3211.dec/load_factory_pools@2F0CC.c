int load_factory_pools()
{
  int v0; // r4
  char *v1; // r7
  int v2; // r0
  int v3; // r3
  int result; // r0
  _DWORD v5[30]; // [sp+0h] [bp-F4h] BYREF
  _DWORD v6[30]; // [sp+78h] [bp-7Ch] BYREF

  v5[0] = "stratum+tcp://ckb.antpool.com:9018";
  v5[1] = "stratum+tcp://ckb.antpool.com:9018";
  v5[2] = "stratum+tcp://ckb.antpool.com:9018";
  v5[3] = "stratum+tcp://ckb.antpool.com:9018";
  v5[4] = "stratum+tcp://ckb.antpool.com:9018";
  v5[5] = "stratum+tcp://ckb.antpool.com:9018";
  v5[6] = "stratum+tcp://kda.antpool.com:9026";
  v5[7] = "stratum+tcp://kda.antpool.com:9026";
  v5[8] = "stratum+tcp://kda.antpool.com:9026";
  v5[12] = "stratum+tcp://dcr.antpool.com:7167";
  v5[13] = "stratum+tcp://dcr.antpool.com:7167";
  v5[14] = "stratum+tcp://dcr.antpool.com:7167";
  v5[15] = "stratum+tcp://stratum-dash.antpool.com:6099";
  v5[16] = "stratum+tcp://stratum-dash.antpool.com:6099";
  v5[17] = "stratum+tcp://stratum-dash.antpool.com:6099";
  v5[20] = "stratum+tcp://stratum-etc.antpool.com:8008";
  v5[23] = "stratum+tcp://stratum-ltc.antpool.com:8888";
  v5[24] = "stratum+tcp://stratum-zec.antpool.com:8899";
  v5[9] = "stratum+tcp://hns.antpool.com:7168";
  v5[10] = "stratum+tcp://hns.antpool.com:7168";
  v5[11] = "stratum+tcp://hns.antpool.com:7168";
  v5[18] = "stratum+tcp://stratum-etc.antpool.com:443";
  v5[19] = "stratum+tcp://stratum-etc.antpool.com:25";
  v0 = 0;
  v5[21] = "stratum+tcp://stratum-ltc.antpool.com:8888";
  v5[22] = "stratum+tcp://stratum-ltc.antpool.com:8888";
  v5[25] = "stratum+tcp://stratum-zec.antpool.com:8899";
  v5[26] = "stratum+tcp://stratum-zec.antpool.com:8899";
  memset(&v5[27], 0, 12);
  memset(&v6[27], 0, 12);
  v6[0] = "Shenzhen-K7-HK-Antpool-CKB";
  v6[1] = "Shenzhen-K7-HK-Antpool-CKB";
  v6[2] = "Shenzhen-K7-HK-Antpool-CKB";
  v6[3] = "Shenzhen-K7-HK-Antpool-CKB";
  v6[4] = "Shenzhen-K7-HK-Antpool-CKB";
  v6[5] = "Shenzhen-K7-HK-Antpool-CKB";
  v6[6] = "Shenzhen-KA3-HK-Antpool-KDA";
  v6[7] = "Shenzhen-KA3-HK-Antpool-KDA";
  v6[8] = "Shenzhen-KA3-HK-Antpool-KDA";
  v6[9] = "Shenzhen-HS3-HK-Antpool-HNS";
  v6[10] = "Shenzhen-HS3-HK-Antpool-HNS";
  v6[11] = "Shenzhen-HS3-HK-Antpool-HNS";
  v6[12] = "Shenzhen-DR7-HK-Antpool-DCRN";
  v6[13] = "Shenzhen-DR7-HK-Antpool-DCRN";
  v6[14] = "Shenzhen-DR7-HK-Antpool-DCRN";
  v6[15] = "shenzhen+test+dash";
  v6[16] = "shenzhen+test+dash";
  v6[17] = "shenzhen+test+dash";
  v6[18] = "E9ETCtest";
  v6[19] = "E9ETCtest";
  v6[20] = "E9ETCtest";
  v6[21] = "shenzhen+test+ltc";
  v6[22] = "shenzhen+test+ltc";
  v6[23] = "shenzhen+test+ltc";
  v6[24] = "shenzhen+test+etc";
  v6[25] = "shenzhen+test+etc";
  v6[26] = "shenzhen+test+etc";
  do
  {
    v1 = (char *)v5[3 * opt_algo + v0];
    v2 = sub_2E878();
    sub_2E1F0((void **)(v2 + 8), (_BYTE *)(v2 + 24), v1);
    v3 = 3 * opt_algo + v0++;
    set_user((char *)v6[v3]);
    result = set_pass("x");
  }
  while ( v0 != 3 );
  return result;
}
