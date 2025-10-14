// Decompiled: cgminer-api_5951e94f5095a15f

int _init(EVP_PKEY_CTX *ctx)

{
    int iVar1;

    iVar1 = FUN_00010a78();
    return iVar1;
}

void _start(undefined4 param_1)

{
    undefined4 in_stack_00000000;

    __libc_start_main(main, in_stack_00000000, &stack0x00000004, 0x114dd,
                      0x11519, param_1);
    /* WARNING: Subroutine does not return */
    abort();
}

/* WARNING: Removing unreachable block (ram,0x00010a8c) */

void FUN_00010a78(void)

{
    __gmon_start__();
    return;
}

/* WARNING: Removing unreachable block (ram,0x00010ab0) */
/* WARNING: Removing unreachable block (ram,0x00010aba) */

void FUN_00010a9c(void)

{
    return;
}

/* WARNING: Removing unreachable block (ram,0x00010adc) */
/* WARNING: Removing unreachable block (ram,0x00010ae6) */

void FUN_00010ac0(void)

{
    return;
}

void _FINI_0(void)

{
    if (DAT_00022084 == '\0') {
        FUN_00010a9c();
        DAT_00022084 = '\x01';
    }
    return;
}

void display(char *param_1)

{
    char *pcVar1;
    byte *pbVar2;
    ushort **ppuVar3;
    char *local_24;
    int local_1c;
    byte *local_18;
    char *local_14;
    char *local_10;
    char *local_c;

    local_24 = param_1;
    while (local_24 != (char *)0x0) {
        pcVar1 = strchr(local_24, 0x7c);
        local_c = pcVar1;
        if (pcVar1 != (char *)0x0) {
            local_c = pcVar1 + 1;
            *pcVar1 = '\0';
        }
        if (*local_24 != '\0') {
            local_1c = 0;
            local_10 = local_24;
            while (local_10 != (char *)0x0) {
                pcVar1 = strchr(local_10, 0x2c);
                local_14 = pcVar1;
                if (pcVar1 != (char *)0x0) {
                    local_14 = pcVar1 + 1;
                    *pcVar1 = '\0';
                }
                if (*local_10 != '\0') {
                    pbVar2 = (byte *)strchr(local_10, 0x3d);
                    local_18 = pbVar2;
                    if (pbVar2 != (byte *)0x0) {
                        local_18 = pbVar2 + 1;
                        *pbVar2 = 0;
                    }
                    if (local_1c == 0) {
                        if ((local_18 == (byte *)0x0) ||
                            (ppuVar3 = __ctype_b_loc(), pbVar2 = local_18,
                             ((*ppuVar3)[*local_18] & 0x800) == 0)) {
                            pbVar2 = &DAT_0001152c;
                        }
                        printf("[%s%s] =>\n(\n", local_10, pbVar2);
                    }
                    if (local_18 == (byte *)0x0) {
                        printf("   [%d] => %s\n", local_1c, local_10);
                    } else {
                        printf("   [%s] => %s\n", local_10, local_18);
                    }
                }
                local_1c = local_1c + 1;
                local_10 = local_14;
            }
            if (0 < local_1c) {
                puts(")");
            }
        }
        local_24 = local_c;
    }
    return;
}

int callapi(char *param_1, char *param_2, uint16_t param_3)

{
    bool bVar1;
    int *piVar2;
    char *pcVar3;
    int iVar4;
    size_t sVar5;
    undefined4 local_48;
    undefined4 local_44;
    undefined4 local_40;
    undefined4 uStack_3c;
    sockaddr local_38;
    size_t local_28;
    int local_24;
    hostent *local_20;
    int local_1c;
    int local_18;
    int local_14;
    char *local_10;
    int local_c;

    local_c = 0;
    local_10 = (char *)0x0;
    local_20 = gethostbyname(param_2);
    if (local_20 == (hostent *)0x0) {
        printf("Couldn\'t get hostname: \'%s\'\n", param_2);
        local_c = 1;
    } else {
        local_24 = socket(2, 1, 0);
        if (local_24 == -1) {
            piVar2 = __errno_location();
            pcVar3 = strerror(*piVar2);
            printf("Socket initialisation failed: %s\n", pcVar3);
            local_c = 1;
        } else {
            memset(&local_38, 0, 0x10);
            local_38.sa_family = 2;
            local_38.sa_data._2_4_ = *(undefined4 *)*local_20->h_addr_list;
            local_38.sa_data._0_2_ = htons(param_3);
            iVar4 = connect(local_24, &local_38, 0x10);
            if (iVar4 < 0) {
                piVar2 = __errno_location();
                pcVar3 = strerror(*piVar2);
                printf("Socket connect failed: %s\n", pcVar3);
                local_c = 1;
            } else {
                local_40 = 1;
                uStack_3c = 0x3c;
                local_c = setsockopt(local_24, 1, 0xd, &local_40, 8);
                if (local_c != 0) {
                    piVar2 = __errno_location();
                    pcVar3 = strerror(*piVar2);
                    printf("cgminer-api, setsocket SO_LINGER failed (%s)\n",
                           pcVar3);
                    close(local_24);
                }
                local_48 = 10;
                local_44 = 0;
                local_c = setsockopt(local_24, 1, 0x15, &local_48, 8);
                if (local_c != 0) {
                    piVar2 = __errno_location();
                    pcVar3 = strerror(*piVar2);
                    printf("cgminer-api, setsocket SO_SNDTIMEO failed (%s)\n",
                           pcVar3);
                    close(local_24);
                }
                local_c = setsockopt(local_24, 1, 0x14, &local_48, 8);
                if (local_c != 0) {
                    piVar2 = __errno_location();
                    pcVar3 = strerror(*piVar2);
                    printf("cgminer-api, setsocket SO_RCVTIMEO failed (%s)\n",
                           pcVar3);
                    close(local_24);
                }
                sVar5 = strlen(param_1);
                local_28 = send(local_24, param_1, sVar5, 0);
                if ((int)local_28 < 1) {
                    piVar2 = __errno_location();
                    pcVar3 = strerror(*piVar2);
                    printf("cgminer api send failed: %s\n", pcVar3);
                    local_c = 1;
                } else {
                    sVar5 = strlen(param_1);
                    if (sVar5 == local_28) {
                        local_14 = 0xffff;
                        local_10 = (char *)malloc(0x10000);
                        if (local_10 == (char *)0x0) {
                            printf("cgminer api: OOM (%d)\n", local_14 + 1);
                            return 1;
                        }
                        local_18 = 0;
                        local_1c = 0;
                        while (true) {
                            if (local_14 == local_18) {
                                sVar5 = local_14 + 0x10000;
                                local_14 = local_14 + 0xffff;
                                local_10 = (char *)realloc(local_10, sVar5);
                                if (local_10 == (char *)0x0) {
                                    printf("cgminer realloc: OOM (%d)\n",
                                           local_14 + 1);
                                    return 1;
                                }
                            }
                            local_28 = recv(local_24, local_10 + local_18,
                                            local_14 - local_18, 0);
                            if ((int)local_28 < 0)
                                break;
                            if (local_28 == 0) {
                                local_c = 1;
                                puts(
                                    "Recv failed: api server close the socket");
                                goto LAB_00011168;
                            }
                            local_18 = local_18 + local_28;
                            if ((local_14 != local_18) ||
                                (iVar4 = local_1c + 1, bVar1 = 1 < local_1c,
                                 local_1c = iVar4, bVar1))
                                goto LAB_00011168;
                        }
                        local_c = 1;
                        piVar2 = __errno_location();
                        pcVar3 = strerror(*piVar2);
                        printf("Recv failed: %s\n", pcVar3);
                    LAB_00011168:
                        local_10[local_18] = '\0';
                        if (DAT_00022088 == 0) {
                            display(local_10);
                        } else {
                            puts(local_10);
                        }
                        free(local_10);
                    }
                }
                close(local_24);
            }
        }
    }
    return local_c;
}

byte *FUN_000111c4(byte *param_1)

{
    ushort **ppuVar1;
    size_t sVar2;
    byte *pbVar3;
    byte *local_14;
    byte *local_c;

    local_14 = param_1;
    while (ppuVar1 = __ctype_b_loc(), ((*ppuVar1)[*local_14] & 0x2000) != 0) {
        local_14 = local_14 + 1;
    }
    sVar2 = strlen((char *)local_14);
    local_c = local_14 + sVar2;
    while (pbVar3 = local_c + -1, local_14 < local_c) {
        ppuVar1 = __ctype_b_loc();
        local_c = pbVar3;
        if (((*ppuVar1)[*pbVar3] & 0x2000) != 0) {
            *pbVar3 = 0;
        }
    }
    return local_14;
}

undefined4 main(int param_1, undefined4 *param_2)

{
    int iVar1;
    char *pcVar2;
    undefined4 uVar3;
    int local_18;
    short local_12;
    char *local_10;
    char *local_c;

    local_c = "summary";
    local_10 = "127.0.0.1";
    local_12 = 0xfbc;
    local_18 = 1;
    if ((param_1 < 2) ||
        (((iVar1 = strcmp((char *)param_2[1], "-?"),
           iVar1 != 0 &&
               (iVar1 = strcmp((char *)param_2[1], "-h"), iVar1 != 0)) &&
          (iVar1 = strcmp((char *)param_2[1], "--help"), iVar1 != 0)))) {
        if ((1 < param_1) &&
            (iVar1 = strcmp((char *)param_2[1], "-o"), iVar1 == 0)) {
            DAT_00022088 = 1;
            local_18 = 2;
        }
        if (local_18 < param_1) {
            iVar1 = local_18 + 1;
            pcVar2 = (char *)FUN_000111c4(param_2[local_18]);
            local_18 = iVar1;
            if (*pcVar2 != '\0') {
                local_c = pcVar2;
            }
        }
        if (local_18 < param_1) {
            iVar1 = local_18 + 1;
            pcVar2 = (char *)FUN_000111c4(param_2[local_18]);
            local_18 = iVar1;
            if (*pcVar2 != '\0') {
                local_10 = pcVar2;
            }
        }
        if (local_18 < param_1) {
            pcVar2 = (char *)FUN_000111c4(param_2[local_18]);
            if (*pcVar2 != '\0') {
                iVar1 = atoi(pcVar2);
                local_12 = (short)iVar1;
            }
        }
        uVar3 = callapi(local_c, local_10, (int)local_12);
    } else {
        fprintf(stderr, "usAge: %s [command [ip/host [port]]]\n", *param_2);
        uVar3 = 1;
    }
    return uVar3;
}

void __libc_csu_init(EVP_PKEY_CTX *param_1, undefined4 param_2,
                     undefined4 param_3, undefined4 param_4)

{
    int iVar1;
    undefined **ppuVar2;

    _init(param_1);
    iVar1 = 0;
    ppuVar2 = &__DT_INIT_ARRAY;
    do {
        iVar1 = iVar1 + 1;
        (*(code *)*ppuVar2)(param_1, param_2, param_3, *ppuVar2, param_4);
        ppuVar2 = ppuVar2 + 1;
    } while (iVar1 != 1);
    return;
}

void __libc_csu_fini(void)

{
    return;
}

void _fini(void)

{
    return;
}
