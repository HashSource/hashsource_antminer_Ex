int (__fastcall *sub_22DE40())(int a1)
{
  int (__fastcall *result)(int); // r0
  _DWORD *v1; // r3
  int v2; // r2

  memset(&dword_4899A0, 0, 0x2E4u);
  result = (int (__fastcall *)(int))sub_223790(&dword_4899A0);
  v1 = (_DWORD *)dword_489F70;
  dword_489AD8 = *(_DWORD *)(dword_489F70 + 312);
  do
  {
    if ( !dword_4899A4 )
      dword_4899A4 = v1[1];
    if ( !dword_4899A8 )
      dword_4899A8 = v1[2];
    if ( !dword_489AF4 )
      dword_489AF4 = v1[85];
    if ( !dword_489A28 )
      dword_489A28 = v1[34];
    if ( !dword_489A2C )
      dword_489A2C = v1[35];
    v2 = dword_489AF0;
    if ( !dword_489AF0 )
      v2 = v1[84];
    v1 = (_DWORD *)*v1;
    if ( !dword_489AF0 )
      dword_489AF0 = v2;
  }
  while ( v1 );
  dword_4899A0 = dword_489F70;
  if ( dword_489C84 )
  {
    memcpy(&unk_489C8C, &dword_4899A0, 0x2E4u);
    off_4899C4 = sub_2297C4;
    off_4899C8 = sub_2296D0;
    off_4899CC = sub_2295DC;
    off_4899D0 = sub_22D458;
    off_4899D4 = sub_2262D0;
    off_4899D8 = sub_232100;
    off_4899DC = sub_2294E8;
    off_4899E0 = sub_2293F4;
    off_4899E4 = (int (*)(void))sub_226218;
    off_4899E8 = sub_226198;
    off_4899EC = sub_22D0D8;
    off_4899F0 = sub_22CF74;
    off_4899F4 = sub_229338;
    off_4899F8 = sub_22927C;
    off_4899FC = sub_2291C0;
    off_489A00 = sub_229104;
    off_489A04 = sub_228F98;
    off_489A08 = sub_228EDC;
    off_489A0C = (int (*)(void))sub_22CE48;
    off_489A10 = (int (*)(void))sub_22CD1C;
    off_489A14 = sub_22C4DC;
    off_489A18 = sub_22C338;
    off_489A1C = sub_22C1D4;
    off_489A20 = sub_22C070;
    off_489A24 = sub_228E20;
    off_489A30 = (int (__fastcall *)(_DWORD, _DWORD))sub_22BF7C;
    off_489A34 = (int (*)(void))sub_22BE18;
    off_489A38 = (int (__fastcall *)(_DWORD, _DWORD))sub_22BCE8;
    off_489A3C = sub_22BB44;
    off_489A40 = sub_22BA18;
    off_489A44 = (int (*)(void))sub_228D64;
    off_489A48 = sub_226118;
    off_489A4C = sub_226098;
    off_489A50 = sub_226018;
    off_489A54 = sub_225F98;
    off_489A58 = sub_228C70;
    off_489A5C = sub_225F18;
    off_489A60 = sub_228B7C;
    off_489A68 = (int (*)(void))sub_22AEA8;
    off_489A6C = sub_228A84;
    off_489A70 = sub_22898C;
    off_489A74 = sub_228894;
    off_489A78 = sub_22879C;
    off_489A7C = sub_228668;
    off_489A80 = sub_228570;
    off_489A84 = sub_228478;
    off_489A88 = sub_225E28;
    off_489A8C = sub_229880;
    dword_489A90 = (int)sub_22830C;
    off_489A94 = sub_225DA8;
    off_489A98 = (int (*)(void))sub_228250;
    off_489A9C = sub_22D378;
    off_489AA0 = sub_22D298;
    off_489AA4 = sub_22ADA0;
    off_489AA8 = sub_225D28;
    off_489AAC = sub_22AC98;
    off_489AB0 = sub_225C34;
    off_489AB4 = sub_225B40;
    off_489AB8 = sub_2280F0;
    off_489ABC = sub_22ABCC;
    off_489AC0 = sub_22AB00;
    off_489AC4 = sub_225AC0;
    off_489AC8 = (int (__fastcall *)(_DWORD, _DWORD, _DWORD))sub_2259D0;
    off_489ACC = (int (*)(void))sub_227FF8;
    off_489AD0 = (int (*)(void))sub_225918;
    dword_489AD4 = (int)sub_225860;
    off_489AF8 = sub_227F3C;
    off_489AFC = sub_227E80;
    off_489B00 = sub_227DC4;
    off_489B04 = sub_227D08;
    dword_489B08 = (int)sub_227C4C;
    off_489B0C = (int (*)(void))sub_227B90;
    off_489B10 = (int (*)(void))sub_227A64;
    off_489B14 = (int (*)(void))sub_227934;
    off_489B18 = (int (__fastcall *)(_DWORD, _DWORD, _DWORD))sub_227808;
    off_489B1C = (int (*)(void))sub_227714;
    off_489B20 = sub_22B8A8;
    dword_489B24 = (int)sub_229F48;
    dword_489B28 = (int)sub_229E84;
    off_489B2C = sub_22DAF0;
    off_489B30 = sub_22CA00;
    off_489B34 = sub_2257E0;
    dword_489B38 = (int)sub_225728;
    off_489B3C = (int (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD))sub_22A9B0;
    off_489B40 = (int (__fastcall *)(_DWORD))sub_22B70C;
    off_489B44 = sub_22B52C;
    off_489B48 = sub_227658;
    off_489B4C = sub_22759C;
    off_489B50 = sub_2274E0;
    off_489B54 = sub_227424;
    off_489B5C = sub_227368;
    off_489B60 = sub_2272AC;
    off_489B64 = (int (*)(void))sub_2271F0;
    off_489B68 = sub_22CC18;
    off_489B6C = sub_22CB0C;
    off_489B70 = (int (*)(void))sub_227134;
    off_489B94 = sub_2256A8;
    off_489B98 = sub_2255F0;
    off_489B9C = sub_227078;
    off_489BA0 = sub_225538;
    off_489BA4 = sub_225480;
    off_489BA8 = sub_2253C8;
    off_489BAC = sub_225348;
    off_489BB0 = sub_2252C8;
    off_489BB4 = sub_226F84;
    off_489BB8 = sub_2251D8;
    off_489BBC = sub_225158;
    off_489BC0 = sub_22B34C;
    off_489BC4 = sub_22C8CC;
    off_489BC8 = sub_226E90;
    off_489BCC = sub_226D9C;
    off_489BD0 = sub_226CA8;
    off_489BD4 = sub_22C748;
    dword_489BD8 = (int)sub_226BEC;
    off_489BDC = sub_226B30;
    off_489BE0 = sub_226A74;
    off_489BE4 = sub_22C680;
    off_489BE8 = sub_226918;
    off_489BEC = sub_22A8A8;
    off_489BF0 = sub_22B1E0;
    dword_489BF4 = (int)sub_22B0A0;
    dword_489BF8 = (int)sub_2250D8;
    off_489BFC = (int (*)(void))sub_22AF74;
    off_489C00 = (int (*)(void))sub_224FE8;
    off_489C04 = sub_22E86C;
    off_489C08 = (int (*)(void))sub_226820;
    dword_489C0C = (int)sub_226764;
    off_489C10 = sub_22666C;
    off_489C14 = sub_22A76C;
    off_489C18 = sub_224F30;
    off_489C1C = sub_224E78;
    off_489C20 = sub_226504;
    off_489C24 = sub_224D88;
    off_489C28 = sub_22A664;
    off_489C2C = sub_224D08;
    dword_489C30 = (int)sub_224C88;
    off_489C34 = sub_224BD0;
    off_489C38 = sub_224B50;
    off_489C3C = sub_22A55C;
    off_489C40 = sub_22A418;
    off_489C44 = sub_224AD0;
    off_489C48 = sub_224A50;
    off_489C4C = sub_2249D0;
    off_489C50 = sub_229DC0;
    off_489C54 = sub_229A48;
    off_489C58 = sub_22A2D8;
    off_489C5C = sub_22A198;
    off_489C60 = sub_22640C;
    off_489C64 = sub_229C80;
    off_489C68 = sub_229B40;
    off_489C6C = (int (*)(void))sub_226350;
    off_489C70 = sub_224918;
    off_489C74 = sub_224860;
    off_489C78 = sub_2247E0;
    off_489C7C = sub_224760;
    return sub_224918;
  }
  return result;
}
