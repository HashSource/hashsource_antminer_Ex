unsigned __int64 *__fastcall sub_22BC4C(unsigned __int64 *result, char *a2, size_t a3)
{
  unsigned __int64 v3; // [sp+40h] [bp-66Ch]
  unsigned __int64 v4; // [sp+50h] [bp-65Ch]
  unsigned __int64 v5; // [sp+60h] [bp-64Ch]
  unsigned __int64 v6; // [sp+70h] [bp-63Ch]
  unsigned __int64 v7; // [sp+80h] [bp-62Ch]
  unsigned __int64 v8; // [sp+90h] [bp-61Ch]
  unsigned __int64 v9; // [sp+A0h] [bp-60Ch]
  unsigned __int64 v10; // [sp+B0h] [bp-5FCh]
  unsigned __int64 v11; // [sp+C0h] [bp-5ECh]
  __int64 v12; // [sp+D0h] [bp-5DCh]
  unsigned __int64 v13; // [sp+E0h] [bp-5CCh]
  __int64 v14; // [sp+F0h] [bp-5BCh]
  unsigned __int64 v15; // [sp+100h] [bp-5ACh]
  __int64 v16; // [sp+110h] [bp-59Ch]
  unsigned __int64 v17; // [sp+120h] [bp-58Ch]
  __int64 v18; // [sp+130h] [bp-57Ch]
  unsigned __int64 v19; // [sp+140h] [bp-56Ch]
  __int64 v20; // [sp+150h] [bp-55Ch]
  unsigned __int64 v21; // [sp+160h] [bp-54Ch]
  __int64 v22; // [sp+170h] [bp-53Ch]
  unsigned __int64 v23; // [sp+180h] [bp-52Ch]
  unsigned __int64 v24; // [sp+190h] [bp-51Ch]
  unsigned __int64 v25; // [sp+1A0h] [bp-50Ch]
  unsigned __int64 v26; // [sp+1B0h] [bp-4FCh]
  unsigned __int64 v27; // [sp+1C0h] [bp-4ECh]
  unsigned __int64 v28; // [sp+1D0h] [bp-4DCh]
  unsigned __int64 v29; // [sp+1E0h] [bp-4CCh]
  unsigned __int64 v30; // [sp+1F0h] [bp-4BCh]
  unsigned __int64 v31; // [sp+200h] [bp-4ACh]
  __int64 v32; // [sp+210h] [bp-49Ch]
  unsigned __int64 v33; // [sp+220h] [bp-48Ch]
  __int64 v34; // [sp+230h] [bp-47Ch]
  unsigned int n; // [sp+4FCh] [bp-1B0h]
  char *src; // [sp+500h] [bp-1ACh]
  unsigned __int64 *v37; // [sp+504h] [bp-1A8h]
  unsigned __int64 v38; // [sp+508h] [bp-1A4h]
  _QWORD v39[15]; // [sp+510h] [bp-19Ch] BYREF
  unsigned __int64 v40; // [sp+588h] [bp-124h]
  unsigned __int64 v41; // [sp+590h] [bp-11Ch]
  unsigned __int64 v42; // [sp+598h] [bp-114h]
  unsigned __int64 v43; // [sp+5A0h] [bp-10Ch]
  unsigned int *v44; // [sp+5A8h] [bp-104h]
  unsigned int i; // [sp+5ACh] [bp-100h]
  __int64 v46; // [sp+5B0h] [bp-FCh]
  unsigned __int64 v47; // [sp+5B8h] [bp-F4h]
  unsigned __int64 v48; // [sp+5C0h] [bp-ECh]
  __int64 v49; // [sp+5C8h] [bp-E4h]
  __int64 v50; // [sp+5D0h] [bp-DCh]
  unsigned __int64 v51; // [sp+5D8h] [bp-D4h]
  __int64 v52; // [sp+5E0h] [bp-CCh]
  __int64 v53; // [sp+5E8h] [bp-C4h]
  unsigned __int64 v54; // [sp+5F0h] [bp-BCh]
  unsigned __int64 v55; // [sp+5F8h] [bp-B4h]
  unsigned __int64 v56; // [sp+600h] [bp-ACh]
  unsigned __int64 v57; // [sp+608h] [bp-A4h]
  unsigned __int64 v58; // [sp+610h] [bp-9Ch]
  unsigned __int64 v59; // [sp+618h] [bp-94h]
  unsigned __int64 v60; // [sp+620h] [bp-8Ch]
  unsigned __int64 v61; // [sp+628h] [bp-84h]
  size_t v62; // [sp+634h] [bp-78h]
  unsigned __int64 v63; // [sp+638h] [bp-74h]
  unsigned __int64 v64; // [sp+640h] [bp-6Ch]
  unsigned __int64 v65; // [sp+648h] [bp-64h]
  unsigned __int64 v66; // [sp+650h] [bp-5Ch]
  unsigned __int64 v67; // [sp+658h] [bp-54h]
  unsigned __int64 v68; // [sp+660h] [bp-4Ch]
  unsigned __int64 v69; // [sp+668h] [bp-44h]
  unsigned __int64 v70; // [sp+670h] [bp-3Ch]
  unsigned __int64 v71; // [sp+678h] [bp-34h]
  unsigned __int64 v72; // [sp+680h] [bp-2Ch]
  int v73; // [sp+68Ch] [bp-20h]

  v37 = result;
  src = a2;
  n = a3;
  v44 = (unsigned int *)result;
  v73 = *((_DWORD *)result + 32);
  if ( a3 >= 128 - v73 )
  {
    v72 = result[17];
    v71 = result[18];
    v70 = result[19];
    v69 = result[20];
    v68 = result[21];
    v67 = result[22];
    v66 = result[23];
    v65 = result[24];
    v43 = result[25];
    v42 = result[26];
    v41 = result[27];
    v40 = result[28];
    v64 = result[29];
    v63 = result[30];
    while ( n )
    {
      v62 = 128 - v73;
      if ( 128 - v73 > n )
        v62 = n;
      result = (unsigned __int64 *)memcpy((char *)v44 + v73, src, v62);
      v73 += v62;
      src += v62;
      n -= v62;
      if ( v73 == 128 )
      {
        v64 += 1024LL;
        if ( v64 <= 0x3FF )
          ++v63;
        v61 = v72;
        v60 = v71;
        v59 = v70;
        v58 = v69;
        v57 = v68;
        v56 = v67;
        v55 = v66;
        v54 = v65;
        v53 = v43 ^ 0x243F6A8885A308D3LL;
        v52 = v42 ^ 0x13198A2E03707344LL;
        v51 = v41 ^ 0xA4093822299F31D0LL;
        v50 = v40 ^ 0x82EFA98EC4E6C89LL;
        v49 = v64 ^ 0x452821E638D01377LL;
        v48 = v64 ^ 0xBE5466CF34E90C6CLL;
        v47 = v63 ^ 0xC0AC29B7C97C50DDLL;
        v46 = v63 ^ 0x3F84D5B5B5470917LL;
        v38 = sub_2261C8(v44);
        v39[0] = sub_2261C8(v44 + 2);
        v39[1] = sub_2261C8(v44 + 4);
        v39[2] = sub_2261C8(v44 + 6);
        v39[3] = sub_2261C8(v44 + 8);
        v39[4] = sub_2261C8(v44 + 10);
        v39[5] = sub_2261C8(v44 + 12);
        v39[6] = sub_2261C8(v44 + 14);
        v39[7] = sub_2261C8(v44 + 16);
        v39[8] = sub_2261C8(v44 + 18);
        v39[9] = sub_2261C8(v44 + 20);
        v39[10] = sub_2261C8(v44 + 22);
        v39[11] = sub_2261C8(v44 + 24);
        v39[12] = sub_2261C8(v44 + 26);
        v39[13] = sub_2261C8(v44 + 28);
        v39[14] = sub_2261C8(v44 + 30);
        for ( i = 0; i <= 0xF; ++i )
        {
          v61 += v57 + (v39[dword_57CFC0[16 * i] - 1] ^ qword_57D3C0[dword_57CFC0[16 * i + 1]]);
          LODWORD(v34) = HIDWORD(v49) ^ HIDWORD(v61);
          HIDWORD(v34) = v49 ^ v61;
          v49 = v34;
          v53 += v34;
          LODWORD(v33) = (__int64)(v57 ^ v53) >> 25;
          HIDWORD(v33) = (((unsigned int)v57 ^ (unsigned int)v53) << 7)
                       | ((unsigned int)(HIDWORD(v57) ^ HIDWORD(v53)) >> 25);
          v57 = v33;
          v61 += v33 + (v39[dword_57CFC0[16 * i + 1] - 1] ^ qword_57D3C0[dword_57CFC0[16 * i]]);
          LODWORD(v32) = (__int64)(v34 ^ v61) >> 16;
          HIDWORD(v32) = (((unsigned int)v34 ^ (unsigned int)v61) << 16)
                       | ((unsigned int)(HIDWORD(v34) ^ HIDWORD(v61)) >> 16);
          v49 = v32;
          v53 += v32;
          LODWORD(v31) = (__int64)(v33 ^ v53) >> 11;
          HIDWORD(v31) = (((unsigned int)v33 ^ (unsigned int)v53) << 21)
                       | ((unsigned int)(HIDWORD(v33) ^ HIDWORD(v53)) >> 11);
          v57 = v31;
          v60 += v56 + (v39[dword_57CFC0[16 * i + 2] - 1] ^ qword_57D3C0[dword_57CFC0[16 * i + 3]]);
          LODWORD(v30) = HIDWORD(v48) ^ HIDWORD(v60);
          HIDWORD(v30) = v48 ^ v60;
          v48 = v30;
          v52 += v30;
          LODWORD(v29) = (__int64)(v56 ^ v52) >> 25;
          HIDWORD(v29) = (((unsigned int)v56 ^ (unsigned int)v52) << 7)
                       | ((unsigned int)(HIDWORD(v56) ^ HIDWORD(v52)) >> 25);
          v56 = v29;
          v60 += v29 + (v39[dword_57CFC0[16 * i + 3] - 1] ^ qword_57D3C0[dword_57CFC0[16 * i + 2]]);
          LODWORD(v28) = (__int64)(v30 ^ v60) >> 16;
          HIDWORD(v28) = (((unsigned int)v30 ^ (unsigned int)v60) << 16)
                       | ((unsigned int)(HIDWORD(v30) ^ HIDWORD(v60)) >> 16);
          v48 = v28;
          v52 += v28;
          LODWORD(v27) = (__int64)(v29 ^ v52) >> 11;
          HIDWORD(v27) = (((unsigned int)v29 ^ (unsigned int)v52) << 21)
                       | ((unsigned int)(HIDWORD(v29) ^ HIDWORD(v52)) >> 11);
          v56 = v27;
          v59 += v55 + (v39[dword_57CFC0[16 * i + 4] - 1] ^ qword_57D3C0[dword_57CFC0[16 * i + 5]]);
          LODWORD(v26) = HIDWORD(v47) ^ HIDWORD(v59);
          HIDWORD(v26) = v47 ^ v59;
          v47 = v26;
          v51 += v26;
          LODWORD(v25) = (__int64)(v55 ^ v51) >> 25;
          HIDWORD(v25) = (((unsigned int)v55 ^ (unsigned int)v51) << 7)
                       | ((unsigned int)(HIDWORD(v55) ^ HIDWORD(v51)) >> 25);
          v55 = v25;
          v59 += v25 + (v39[dword_57CFC0[16 * i + 5] - 1] ^ qword_57D3C0[dword_57CFC0[16 * i + 4]]);
          LODWORD(v24) = (__int64)(v26 ^ v59) >> 16;
          HIDWORD(v24) = (((unsigned int)v26 ^ (unsigned int)v59) << 16)
                       | ((unsigned int)(HIDWORD(v26) ^ HIDWORD(v59)) >> 16);
          v47 = v24;
          v51 += v24;
          LODWORD(v23) = (__int64)(v25 ^ v51) >> 11;
          HIDWORD(v23) = (((unsigned int)v25 ^ (unsigned int)v51) << 21)
                       | ((unsigned int)(HIDWORD(v25) ^ HIDWORD(v51)) >> 11);
          v55 = v23;
          v58 += v54 + (v39[dword_57CFC0[16 * i + 6] - 1] ^ qword_57D3C0[dword_57CFC0[16 * i + 7]]);
          LODWORD(v22) = HIDWORD(v46) ^ HIDWORD(v58);
          HIDWORD(v22) = v46 ^ v58;
          v46 = v22;
          v50 += v22;
          LODWORD(v21) = (__int64)(v54 ^ v50) >> 25;
          HIDWORD(v21) = (((unsigned int)v54 ^ (unsigned int)v50) << 7)
                       | ((unsigned int)(HIDWORD(v54) ^ HIDWORD(v50)) >> 25);
          v54 = v21;
          v58 += v21 + (v39[dword_57CFC0[16 * i + 7] - 1] ^ qword_57D3C0[dword_57CFC0[16 * i + 6]]);
          LODWORD(v20) = (__int64)(v22 ^ v58) >> 16;
          HIDWORD(v20) = (((unsigned int)v22 ^ (unsigned int)v58) << 16)
                       | ((unsigned int)(HIDWORD(v22) ^ HIDWORD(v58)) >> 16);
          v46 = v20;
          v50 += v20;
          LODWORD(v19) = (__int64)(v21 ^ v50) >> 11;
          HIDWORD(v19) = (((unsigned int)v21 ^ (unsigned int)v50) << 21)
                       | ((unsigned int)(HIDWORD(v21) ^ HIDWORD(v50)) >> 11);
          v54 = v19;
          v61 += v27 + (v39[dword_57CFC0[16 * i + 8] - 1] ^ qword_57D3C0[dword_57CFC0[16 * i + 9]]);
          LODWORD(v18) = HIDWORD(v20) ^ HIDWORD(v61);
          HIDWORD(v18) = v20 ^ v61;
          v46 = v18;
          v51 += v18;
          LODWORD(v17) = (__int64)(v27 ^ v51) >> 25;
          HIDWORD(v17) = (((unsigned int)v27 ^ (unsigned int)v51) << 7)
                       | ((unsigned int)(HIDWORD(v27) ^ HIDWORD(v51)) >> 25);
          v56 = v17;
          v61 += v17 + (v39[dword_57CFC0[16 * i + 9] - 1] ^ qword_57D3C0[dword_57CFC0[16 * i + 8]]);
          LODWORD(v16) = (__int64)(v18 ^ v61) >> 16;
          HIDWORD(v16) = (((unsigned int)v18 ^ (unsigned int)v61) << 16)
                       | ((unsigned int)(HIDWORD(v18) ^ HIDWORD(v61)) >> 16);
          v46 = v16;
          v51 += v16;
          LODWORD(v15) = (__int64)(v17 ^ v51) >> 11;
          HIDWORD(v15) = (((unsigned int)v17 ^ (unsigned int)v51) << 21)
                       | ((unsigned int)(HIDWORD(v17) ^ HIDWORD(v51)) >> 11);
          v56 = v15;
          v60 += v23 + (v39[dword_57CFC0[16 * i + 10] - 1] ^ qword_57D3C0[dword_57CFC0[16 * i + 11]]);
          LODWORD(v14) = HIDWORD(v32) ^ HIDWORD(v60);
          HIDWORD(v14) = v32 ^ v60;
          v49 = v14;
          v50 += v14;
          LODWORD(v13) = (__int64)(v23 ^ v50) >> 25;
          HIDWORD(v13) = (((unsigned int)v23 ^ (unsigned int)v50) << 7)
                       | ((unsigned int)(HIDWORD(v23) ^ HIDWORD(v50)) >> 25);
          v55 = v13;
          v60 += v13 + (v39[dword_57CFC0[16 * i + 11] - 1] ^ qword_57D3C0[dword_57CFC0[16 * i + 10]]);
          LODWORD(v12) = (__int64)(v14 ^ v60) >> 16;
          HIDWORD(v12) = (((unsigned int)v14 ^ (unsigned int)v60) << 16)
                       | ((unsigned int)(HIDWORD(v14) ^ HIDWORD(v60)) >> 16);
          v49 = v12;
          v50 += v12;
          LODWORD(v11) = (__int64)(v13 ^ v50) >> 11;
          HIDWORD(v11) = (((unsigned int)v13 ^ (unsigned int)v50) << 21)
                       | ((unsigned int)(HIDWORD(v13) ^ HIDWORD(v50)) >> 11);
          v55 = v11;
          v59 += v19 + (v39[dword_57CFC0[16 * i + 12] - 1] ^ qword_57D3C0[dword_57CFC0[16 * i + 13]]);
          LODWORD(v10) = HIDWORD(v28) ^ HIDWORD(v59);
          HIDWORD(v10) = v28 ^ v59;
          v48 = v10;
          v53 += v10;
          LODWORD(v9) = (__int64)(v19 ^ v53) >> 25;
          HIDWORD(v9) = (((unsigned int)v19 ^ (unsigned int)v53) << 7)
                      | ((unsigned int)(HIDWORD(v19) ^ HIDWORD(v53)) >> 25);
          v54 = v9;
          v59 += v9 + (v39[dword_57CFC0[16 * i + 13] - 1] ^ qword_57D3C0[dword_57CFC0[16 * i + 12]]);
          LODWORD(v8) = (__int64)(v10 ^ v59) >> 16;
          HIDWORD(v8) = (((unsigned int)v10 ^ (unsigned int)v59) << 16)
                      | ((unsigned int)(HIDWORD(v10) ^ HIDWORD(v59)) >> 16);
          v48 = v8;
          v53 += v8;
          LODWORD(v7) = (__int64)(v9 ^ v53) >> 11;
          HIDWORD(v7) = (((unsigned int)v9 ^ (unsigned int)v53) << 21)
                      | ((unsigned int)(HIDWORD(v9) ^ HIDWORD(v53)) >> 11);
          v54 = v7;
          v58 += v31 + (v39[dword_57CFC0[16 * i + 14] - 1] ^ qword_57D3C0[dword_57CFC0[16 * i + 15]]);
          LODWORD(v6) = HIDWORD(v24) ^ HIDWORD(v58);
          HIDWORD(v6) = v24 ^ v58;
          v47 = v6;
          v52 += v6;
          LODWORD(v5) = (__int64)(v31 ^ v52) >> 25;
          HIDWORD(v5) = (((unsigned int)v31 ^ (unsigned int)v52) << 7) | ((unsigned int)((v31 ^ v52) >> 32) >> 25);
          v57 = v5;
          v58 += v5 + (v39[dword_57CFC0[16 * i + 15] - 1] ^ qword_57D3C0[dword_57CFC0[16 * i + 14]]);
          LODWORD(v4) = (__int64)(v6 ^ v58) >> 16;
          HIDWORD(v4) = (((unsigned int)v6 ^ (unsigned int)v58) << 16) | ((unsigned int)((v6 ^ v58) >> 32) >> 16);
          v47 = v4;
          v52 += v4;
          LODWORD(v3) = (__int64)(v5 ^ v52) >> 11;
          HIDWORD(v3) = (((unsigned int)v5 ^ (unsigned int)v52) << 21) | ((unsigned int)((v5 ^ v52) >> 32) >> 11);
          v57 = v3;
        }
        v72 ^= v43 ^ v61 ^ v53;
        v71 ^= v42 ^ v60 ^ v52;
        v70 ^= v41 ^ v59 ^ v51;
        v69 ^= v40 ^ v58 ^ v50;
        v68 ^= v43 ^ v57 ^ v49;
        v67 ^= v42 ^ v56 ^ v48;
        v66 ^= v41 ^ v55 ^ v47;
        result = (unsigned __int64 *)(v40 ^ v54 ^ v46);
        v65 ^= v40 ^ v54 ^ v46;
        v73 = 0;
      }
    }
    v37[17] = v72;
    v37[18] = v71;
    v37[19] = v70;
    v37[20] = v69;
    v37[21] = v68;
    v37[22] = v67;
    v37[23] = v66;
    v37[24] = v65;
    v37[25] = v43;
    v37[26] = v42;
    v37[27] = v41;
    v37[28] = v40;
    v37[29] = v64;
    v37[30] = v63;
    *((_DWORD *)v37 + 32) = v73;
  }
  else
  {
    result = (unsigned __int64 *)memcpy((char *)v44 + v73, a2, a3);
    *((_DWORD *)v37 + 32) = v73 + n;
  }
  return result;
}
