// license:BSD-3-Clause
// copyright-holders:Robbbert

#include "includes/neogeo.h"


void neogeo_state::init_sengo3d()
{
	init_neogeo();
	m_cmc_prot->neogeo_sfix_decrypt(spr_region, spr_region_size, fix_region, fix_region_size);
}



ROM_START( sengokucd )
	ROM_REGION( 0x120000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "017cd.p1",  0x000000, 0x100000, CRC(89290fa2) SHA1(c546aaf74e823d76e5a9ac592edd098a7cf531ed) )
	ROM_LOAD16_WORD_SWAP( "017.p2", 0x100000, 0x020000, CRC(3024bbb3) SHA1(88892e1292dd60f35a76f9a22e623d4f0f9693cc) )

	NEO_SFIX_128K( "017.s1", CRC(b246204d) SHA1(73dce64c61fb5bb7e836a8e60f081bb77d80d281) )

	NEO_BIOS_AUDIO_128K( "017.m1", CRC(9b4f34c6) SHA1(7f3a51f47fcbaa598f5c76bc66e2c53c8dfd852d) )

	ROM_REGION( 0x200000, "ymsnd", 0 )
	ROM_LOAD( "017.v1", 0x000000, 0x100000, CRC(23663295) SHA1(9374a5d9f3de8e6a97c11f07d8b4485ac9d55edb) )
	ROM_LOAD( "017.v2", 0x100000, 0x100000, CRC(f61e6765) SHA1(1c9b287996947319eb3d288c3d82932cf01039db) )

	ROM_REGION( 0x400000, "sprites", 0 )
	ROM_LOAD16_BYTE( "017.c1", 0x000000, 0x100000, CRC(b4eb82a1) SHA1(79879e2ea78c07d04c88dc9a1ad59604b7a078be) )
	ROM_LOAD16_BYTE( "017.c2", 0x000001, 0x100000, CRC(d55c550d) SHA1(6110f693aa23710939c04153cf5af26493e4a03f) )
	ROM_LOAD16_BYTE( "017.c3", 0x200000, 0x100000, CRC(ed51ef65) SHA1(e8a8d86e24454948e51a75c883bc6e4091cbf820) )
	ROM_LOAD16_BYTE( "017.c4", 0x200001, 0x100000, CRC(f4f3c9cb) SHA1(8faafa89dbd0345218f71f891419d2e4e7578200) )
ROM_END


ROM_START( sengoku3b ) /* Sengoku 3 - Hack by Ydmis - (Can choose Byakki and Okuni) */
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "261b.p1", 0x100000, 0x100000, CRC(66553650) SHA1(f235681d394c6526e9c61f5321a80287240ef61f) )
	ROM_CONTINUE( 0x000000, 0x100000 )

	NEO_SFIX_MT_128K

	NEO_BIOS_AUDIO_128K( "261d.m1", CRC(36ed9cdd) SHA1(78a7d755e9e9f52255ac6228d9d402fd6a02c126) )

	ROM_REGION( 0x0e00000, "ymsnd", 0 )
	ROM_LOAD( "261.v1", 0x000000, 0x400000, CRC(64c30081) SHA1(f9ebd20cf59b72e864b7274c1bdb6d99ecaf4595) )
	ROM_LOAD( "261.v2", 0x400000, 0x400000, CRC(392a9c47) SHA1(7ab90a54089236ca6c3ef1af8e566a8025d38159) )
	ROM_LOAD( "261.v3", 0x800000, 0x400000, CRC(c1a7ebe3) SHA1(1d7bb481451f5ee0457e954bb5210300182c3c9c) )
	ROM_LOAD( "261.v4", 0xc00000, 0x200000, CRC(9000d085) SHA1(11157b355ab4eb6627e9f322ed875332d3d77349) )

	ROM_REGION( 0x2000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "261.c1", 0x0000000, 0x800000, CRC(ded84d9c) SHA1(d960523b813d4fae06d716298d4e431a5c77a0c5) )
	ROM_LOAD16_BYTE( "261.c2", 0x0000001, 0x800000, CRC(b8eb4348) SHA1(619d24312549932959481fa58f43f11c048e1ca5) )
	ROM_LOAD16_BYTE( "261.c3", 0x1000000, 0x800000, CRC(84e2034a) SHA1(38ec4ae4b86933a25c9a03799b8cade4b1346401) )
	ROM_LOAD16_BYTE( "261.c4", 0x1000001, 0x800000, CRC(0b45ae53) SHA1(a19fb21408ab633aee8bbf38bf43b5e26766b355) )
ROM_END

ROM_START( sengoku3c ) /* Sengoku 3 - Colour fix by UNKNOWN - (Character colour change - can choose Byakki and Okuni) */
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "261c.p1", 0x000000, 0x200000, CRC(62abbf93) SHA1(f990263265f6dd742d3bd20587affbb056e222a9) )

	NEO_SFIX_MT_128K

	NEO_BIOS_AUDIO_128K( "261d.m1", CRC(36ed9cdd) SHA1(78a7d755e9e9f52255ac6228d9d402fd6a02c126) )

	ROM_REGION( 0x0e00000, "ymsnd", 0 )
	ROM_LOAD( "261.v1", 0x000000, 0x400000, CRC(64c30081) SHA1(f9ebd20cf59b72e864b7274c1bdb6d99ecaf4595) )
	ROM_LOAD( "261.v2", 0x400000, 0x400000, CRC(392a9c47) SHA1(7ab90a54089236ca6c3ef1af8e566a8025d38159) )
	ROM_LOAD( "261.v3", 0x800000, 0x400000, CRC(c1a7ebe3) SHA1(1d7bb481451f5ee0457e954bb5210300182c3c9c) )
	ROM_LOAD( "261.v4", 0xc00000, 0x200000, CRC(9000d085) SHA1(11157b355ab4eb6627e9f322ed875332d3d77349) )

	ROM_REGION( 0x2000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "261.c1", 0x0000000, 0x800000, CRC(ded84d9c) SHA1(d960523b813d4fae06d716298d4e431a5c77a0c5) )
	ROM_LOAD16_BYTE( "261.c2", 0x0000001, 0x800000, CRC(b8eb4348) SHA1(619d24312549932959481fa58f43f11c048e1ca5) )
	ROM_LOAD16_BYTE( "261.c3", 0x1000000, 0x800000, CRC(84e2034a) SHA1(38ec4ae4b86933a25c9a03799b8cade4b1346401) )
	ROM_LOAD16_BYTE( "261.c4", 0x1000001, 0x800000, CRC(0b45ae53) SHA1(a19fb21408ab633aee8bbf38bf43b5e26766b355) )
ROM_END

ROM_START( sengoku3d )
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "261.p1", 0x100000, 0x100000, CRC(e0d4bc0a) SHA1(8df366097f224771ca6d1aa5c1691cd46776cd12) )
	ROM_CONTINUE( 0x000000, 0x100000 )

	NEO_SFIX_MT_128K

	NEO_BIOS_AUDIO_128K( "261d.m1", CRC(36ed9cdd) SHA1(78a7d755e9e9f52255ac6228d9d402fd6a02c126) )

	ROM_REGION( 0xE00000, "ymsnd", 0 )
	ROM_LOAD( "261.v1", 0x000000, 0x400000, CRC(64c30081) SHA1(f9ebd20cf59b72e864b7274c1bdb6d99ecaf4595) )
	ROM_LOAD( "261.v2", 0x400000, 0x400000, CRC(392a9c47) SHA1(7ab90a54089236ca6c3ef1af8e566a8025d38159) )
	ROM_LOAD( "261.v3", 0x800000, 0x400000, CRC(c1a7ebe3) SHA1(1d7bb481451f5ee0457e954bb5210300182c3c9c) )
	ROM_LOAD( "261.v4", 0xc00000, 0x200000, CRC(9000d085) SHA1(11157b355ab4eb6627e9f322ed875332d3d77349) )

	ROM_REGION( 0x2000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "261d.c1", 0x0000000, 0x800000, CRC(9af7cbca) SHA1(cf2fe3e5265861369f2878140ef33a6715b031aa) )
	ROM_LOAD16_BYTE( "261d.c2", 0x0000001, 0x800000, CRC(2a1f874d) SHA1(26923ec0bedba56f25e6222aa107b45ccb3def7b) )
	ROM_LOAD16_BYTE( "261d.c3", 0x1000000, 0x800000, CRC(5403adb5) SHA1(5614ee892e810dc49758f5985b3dc4f227e01b56) )
	ROM_LOAD16_BYTE( "261d.c4", 0x1000001, 0x800000, CRC(18926df6) SHA1(a4859c9166ef7abec1f3e6af3292051a63a81f93) )
ROM_END

ROM_START( sengoku3eb ) // sgk3eb
	ROM_REGION( 0x500000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "261eb.p1", 0x100000, 0x100000, CRC(a77a0dc7) SHA1(a78885d1d121583c7733a868f6140babc4ba5544) )
	ROM_IGNORE(0x100000)
	ROM_CONTINUE(0x000000, 0x100000)
	ROM_IGNORE(0x154f48)

	NEO_SFIX_MT_128K

	NEO_BIOS_AUDIO_512K( "261.m1", CRC(7d501c39) SHA1(8e6bcc428f5ac7532d9c9be7e07ad0821461a080) )

	ROM_REGION( 0x0e00000, "ymsnd", 0 )
	ROM_LOAD( "261.v1", 0x000000, 0x400000, CRC(64c30081) SHA1(f9ebd20cf59b72e864b7274c1bdb6d99ecaf4595) )
	ROM_LOAD( "261.v2", 0x400000, 0x400000, CRC(392a9c47) SHA1(7ab90a54089236ca6c3ef1af8e566a8025d38159) )
	ROM_LOAD( "261.v3", 0x800000, 0x400000, CRC(c1a7ebe3) SHA1(1d7bb481451f5ee0457e954bb5210300182c3c9c) )
	ROM_LOAD( "261.v4", 0xc00000, 0x200000, CRC(9000d085) SHA1(11157b355ab4eb6627e9f322ed875332d3d77349) )

	ROM_REGION( 0x2000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "261.c1", 0x0000000, 0x800000, CRC(ded84d9c) SHA1(d960523b813d4fae06d716298d4e431a5c77a0c5) )
	ROM_LOAD16_BYTE( "261.c2", 0x0000001, 0x800000, CRC(b8eb4348) SHA1(619d24312549932959481fa58f43f11c048e1ca5) )
	ROM_LOAD16_BYTE( "261.c3", 0x1000000, 0x800000, CRC(84e2034a) SHA1(38ec4ae4b86933a25c9a03799b8cade4b1346401) )
	ROM_LOAD16_BYTE( "261.c4", 0x1000001, 0x800000, CRC(0b45ae53) SHA1(a19fb21408ab633aee8bbf38bf43b5e26766b355) )
ROM_END

ROM_START( sengoku3eh )
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "261eh.p1", 0x000000, 0x200000, CRC(b0ce4444) SHA1(c1b46daf677bfbf61b2fe8e5449f9ccba231b59a) )

	NEO_SFIX_MT_128K

	NEO_BIOS_AUDIO_128K( "261d.m1", CRC(36ed9cdd) SHA1(78a7d755e9e9f52255ac6228d9d402fd6a02c126) )

	ROM_REGION( 0x0e00000, "ymsnd", 0 )
	ROM_LOAD( "261.v1", 0x000000, 0x400000, CRC(64c30081) SHA1(f9ebd20cf59b72e864b7274c1bdb6d99ecaf4595) )
	ROM_LOAD( "261.v2", 0x400000, 0x400000, CRC(392a9c47) SHA1(7ab90a54089236ca6c3ef1af8e566a8025d38159) )
	ROM_LOAD( "261.v3", 0x800000, 0x400000, CRC(c1a7ebe3) SHA1(1d7bb481451f5ee0457e954bb5210300182c3c9c) )
	ROM_LOAD( "261.v4", 0xc00000, 0x200000, CRC(9000d085) SHA1(11157b355ab4eb6627e9f322ed875332d3d77349) )

	ROM_REGION( 0x2000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "261.c1", 0x0000000, 0x800000, CRC(ded84d9c) SHA1(d960523b813d4fae06d716298d4e431a5c77a0c5) )
	ROM_LOAD16_BYTE( "261.c2", 0x0000001, 0x800000, CRC(b8eb4348) SHA1(619d24312549932959481fa58f43f11c048e1ca5) )
	ROM_LOAD16_BYTE( "261.c3", 0x1000000, 0x800000, CRC(84e2034a) SHA1(38ec4ae4b86933a25c9a03799b8cade4b1346401) )
	ROM_LOAD16_BYTE( "261.c4", 0x1000001, 0x800000, CRC(0b45ae53) SHA1(a19fb21408ab633aee8bbf38bf43b5e26766b355) )
ROM_END

ROM_START( sengoku3ha ) /* Sengoku 3 - Hack by HappyAse - (Can choose Byakki and Okuni - can directly choose USA and Brazil stage) */
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "261ha.p1", 0x000000, 0x200000, CRC(ff392440) SHA1(01184f9edc786d0b83a3afe83e53b9834d54a98d) )

	NEO_SFIX_MT_128K

	NEO_BIOS_AUDIO_128K( "261d.m1", CRC(36ed9cdd) SHA1(78a7d755e9e9f52255ac6228d9d402fd6a02c126) )

	ROM_REGION( 0x0e00000, "ymsnd", 0 )
	ROM_LOAD( "261.v1", 0x000000, 0x400000, CRC(64c30081) SHA1(f9ebd20cf59b72e864b7274c1bdb6d99ecaf4595) )
	ROM_LOAD( "261.v2", 0x400000, 0x400000, CRC(392a9c47) SHA1(7ab90a54089236ca6c3ef1af8e566a8025d38159) )
	ROM_LOAD( "261.v3", 0x800000, 0x400000, CRC(c1a7ebe3) SHA1(1d7bb481451f5ee0457e954bb5210300182c3c9c) )
	ROM_LOAD( "261.v4", 0xc00000, 0x200000, CRC(9000d085) SHA1(11157b355ab4eb6627e9f322ed875332d3d77349) )

	ROM_REGION( 0x2000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "261.c1", 0x0000000, 0x800000, CRC(ded84d9c) SHA1(d960523b813d4fae06d716298d4e431a5c77a0c5) )
	ROM_LOAD16_BYTE( "261.c2", 0x0000001, 0x800000, CRC(b8eb4348) SHA1(619d24312549932959481fa58f43f11c048e1ca5) )
	ROM_LOAD16_BYTE( "261.c3", 0x1000000, 0x800000, CRC(84e2034a) SHA1(38ec4ae4b86933a25c9a03799b8cade4b1346401) )
	ROM_LOAD16_BYTE( "261.c4", 0x1000001, 0x800000, CRC(0b45ae53) SHA1(a19fb21408ab633aee8bbf38bf43b5e26766b355) )
ROM_END

ROM_START( sengoku3k ) /* Sengoku 3 - Enhance by KrysoFun - (Can choose Byakki and Okuni - power hack) */
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "261k.p1", 0x100000, 0x100000, CRC(ff0ab4f5) SHA1(581184174074333d7e94cbda1f5d6b3f4aec452c) )
	ROM_CONTINUE( 0x000000, 0x100000 )

	NEO_SFIX_MT_128K

	NEO_BIOS_AUDIO_128K( "261d.m1", CRC(36ed9cdd) SHA1(78a7d755e9e9f52255ac6228d9d402fd6a02c126) )

	ROM_REGION( 0x0e00000, "ymsnd", 0 )
	ROM_LOAD( "261.v1", 0x000000, 0x400000, CRC(64c30081) SHA1(f9ebd20cf59b72e864b7274c1bdb6d99ecaf4595) )
	ROM_LOAD( "261.v2", 0x400000, 0x400000, CRC(392a9c47) SHA1(7ab90a54089236ca6c3ef1af8e566a8025d38159) )
	ROM_LOAD( "261.v3", 0x800000, 0x400000, CRC(c1a7ebe3) SHA1(1d7bb481451f5ee0457e954bb5210300182c3c9c) )
	ROM_LOAD( "261.v4", 0xc00000, 0x200000, CRC(9000d085) SHA1(11157b355ab4eb6627e9f322ed875332d3d77349) )

	ROM_REGION( 0x2000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "261.c1", 0x0000000, 0x800000, CRC(ded84d9c) SHA1(d960523b813d4fae06d716298d4e431a5c77a0c5) )
	ROM_LOAD16_BYTE( "261.c2", 0x0000001, 0x800000, CRC(b8eb4348) SHA1(619d24312549932959481fa58f43f11c048e1ca5) )
	ROM_LOAD16_BYTE( "261.c3", 0x1000000, 0x800000, CRC(84e2034a) SHA1(38ec4ae4b86933a25c9a03799b8cade4b1346401) )
	ROM_LOAD16_BYTE( "261.c4", 0x1000001, 0x800000, CRC(0b45ae53) SHA1(a19fb21408ab633aee8bbf38bf43b5e26766b355) )
ROM_END

ROM_START( sengoku3kc ) /* Sengoku 3 - Colour fix by Fighters Kim - (Character colour change - 80%) */
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "261kc.p1", 0x100000, 0x100000, CRC(78a02b04) SHA1(d3634471cc12dd77a53d97405bb972ebc46ef513) )
	ROM_CONTINUE( 0x000000, 0x100000 )

	NEO_SFIX_MT_128K

	NEO_BIOS_AUDIO_128K( "261d.m1", CRC(36ed9cdd) SHA1(78a7d755e9e9f52255ac6228d9d402fd6a02c126) )

	ROM_REGION( 0x0e00000, "ymsnd", 0 )
	ROM_LOAD( "261.v1", 0x000000, 0x400000, CRC(64c30081) SHA1(f9ebd20cf59b72e864b7274c1bdb6d99ecaf4595) )
	ROM_LOAD( "261.v2", 0x400000, 0x400000, CRC(392a9c47) SHA1(7ab90a54089236ca6c3ef1af8e566a8025d38159) )
	ROM_LOAD( "261.v3", 0x800000, 0x400000, CRC(c1a7ebe3) SHA1(1d7bb481451f5ee0457e954bb5210300182c3c9c) )
	ROM_LOAD( "261.v4", 0xc00000, 0x200000, CRC(9000d085) SHA1(11157b355ab4eb6627e9f322ed875332d3d77349) )

	ROM_REGION( 0x2000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "261.c1", 0x0000000, 0x800000, CRC(ded84d9c) SHA1(d960523b813d4fae06d716298d4e431a5c77a0c5) )
	ROM_LOAD16_BYTE( "261.c2", 0x0000001, 0x800000, CRC(b8eb4348) SHA1(619d24312549932959481fa58f43f11c048e1ca5) )
	ROM_LOAD16_BYTE( "261.c3", 0x1000000, 0x800000, CRC(84e2034a) SHA1(38ec4ae4b86933a25c9a03799b8cade4b1346401) )
	ROM_LOAD16_BYTE( "261.c4", 0x1000001, 0x800000, CRC(0b45ae53) SHA1(a19fb21408ab633aee8bbf38bf43b5e26766b355) )
ROM_END

ROM_START( sengoku3p )
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "261p.p1", 0x000000, 0x200000, CRC(2997b5ef) SHA1(86b9509eba939528aa0744ad8742cedfaf66b02e) )

	NEO_SFIX_128K( "261s.s1", CRC(c1e27cc7) SHA1(7d38319f517059f60287a8ce393a4901719db8a9) )

	NEO_BIOS_AUDIO_128K( "261d.m1", CRC(36ed9cdd) SHA1(78a7d755e9e9f52255ac6228d9d402fd6a02c126) )

	ROM_REGION( 0x0e00000, "ymsnd", 0 )
	ROM_LOAD( "261.v1", 0x000000, 0x400000, CRC(64c30081) SHA1(f9ebd20cf59b72e864b7274c1bdb6d99ecaf4595) )
	ROM_LOAD( "261.v2", 0x400000, 0x400000, CRC(392a9c47) SHA1(7ab90a54089236ca6c3ef1af8e566a8025d38159) )
	ROM_LOAD( "261.v3", 0x800000, 0x400000, CRC(c1a7ebe3) SHA1(1d7bb481451f5ee0457e954bb5210300182c3c9c) )
	ROM_LOAD( "261.v4", 0xc00000, 0x200000, CRC(9000d085) SHA1(11157b355ab4eb6627e9f322ed875332d3d77349) )

	ROM_REGION( 0x2000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "261d.c1", 0x0000000, 0x800000, CRC(9af7cbca) SHA1(cf2fe3e5265861369f2878140ef33a6715b031aa) )
	ROM_LOAD16_BYTE( "261d.c2", 0x0000001, 0x800000, CRC(2a1f874d) SHA1(26923ec0bedba56f25e6222aa107b45ccb3def7b) )
	ROM_LOAD16_BYTE( "261d.c3", 0x1000000, 0x800000, CRC(5403adb5) SHA1(5614ee892e810dc49758f5985b3dc4f227e01b56) )
	ROM_LOAD16_BYTE( "261d.c4", 0x1000001, 0x800000, CRC(18926df6) SHA1(a4859c9166ef7abec1f3e6af3292051a63a81f93) )
ROM_END

ROM_START( sengoku3pl )
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "261pl.p1", 0x100000, 0x100000, CRC(87a65e84) SHA1(0475d81c1fb4e4df7a3773522aa2958fd550e8ad) )
	ROM_CONTINUE( 0x000000, 0x100000 )

	NEO_SFIX_MT_128K

	NEO_BIOS_AUDIO_128K( "261d.m1", CRC(36ed9cdd) SHA1(78a7d755e9e9f52255ac6228d9d402fd6a02c126) )

	ROM_REGION( 0x0e00000, "ymsnd", 0 )
	ROM_LOAD( "261.v1", 0x000000, 0x400000, CRC(64c30081) SHA1(f9ebd20cf59b72e864b7274c1bdb6d99ecaf4595) )
	ROM_LOAD( "261.v2", 0x400000, 0x400000, CRC(392a9c47) SHA1(7ab90a54089236ca6c3ef1af8e566a8025d38159) )
	ROM_LOAD( "261.v3", 0x800000, 0x400000, CRC(c1a7ebe3) SHA1(1d7bb481451f5ee0457e954bb5210300182c3c9c) )
	ROM_LOAD( "261.v4", 0xc00000, 0x200000, CRC(9000d085) SHA1(11157b355ab4eb6627e9f322ed875332d3d77349) )

	ROM_REGION( 0x2000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "261d.c1", 0x0000000, 0x800000, CRC(9af7cbca) SHA1(cf2fe3e5265861369f2878140ef33a6715b031aa) )
	ROM_LOAD16_BYTE( "261d.c2", 0x0000001, 0x800000, CRC(2a1f874d) SHA1(26923ec0bedba56f25e6222aa107b45ccb3def7b) )
	ROM_LOAD16_BYTE( "261d.c3", 0x1000000, 0x800000, CRC(5403adb5) SHA1(5614ee892e810dc49758f5985b3dc4f227e01b56) )
	ROM_LOAD16_BYTE( "261d.c4", 0x1000001, 0x800000, CRC(18926df6) SHA1(a4859c9166ef7abec1f3e6af3292051a63a81f93) )
ROM_END

ROM_START( sengoku3s )
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "261s.p1", 0x000000, 0x200000, CRC(5a1b5e85) SHA1(239617385b40ae6a86f737195ec6017171157bef) )

	NEO_SFIX_128K( "261s.s1", CRC(c1e27cc7) SHA1(7d38319f517059f60287a8ce393a4901719db8a9) )

	NEO_BIOS_AUDIO_128K( "261d.m1", CRC(36ed9cdd) SHA1(78a7d755e9e9f52255ac6228d9d402fd6a02c126) )

	ROM_REGION( 0x0e00000, "ymsnd", 0 )
	ROM_LOAD( "261.v1", 0x000000, 0x400000, CRC(64c30081) SHA1(f9ebd20cf59b72e864b7274c1bdb6d99ecaf4595) )
	ROM_LOAD( "261.v2", 0x400000, 0x400000, CRC(392a9c47) SHA1(7ab90a54089236ca6c3ef1af8e566a8025d38159) )
	ROM_LOAD( "261.v3", 0x800000, 0x400000, CRC(c1a7ebe3) SHA1(1d7bb481451f5ee0457e954bb5210300182c3c9c) )
	ROM_LOAD( "261.v4", 0xc00000, 0x200000, CRC(9000d085) SHA1(11157b355ab4eb6627e9f322ed875332d3d77349) )

	ROM_REGION( 0x2000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "261d.c1", 0x0000000, 0x800000, CRC(9af7cbca) SHA1(cf2fe3e5265861369f2878140ef33a6715b031aa) )
	ROM_LOAD16_BYTE( "261d.c2", 0x0000001, 0x800000, CRC(2a1f874d) SHA1(26923ec0bedba56f25e6222aa107b45ccb3def7b) )
	ROM_LOAD16_BYTE( "261d.c3", 0x1000000, 0x800000, CRC(5403adb5) SHA1(5614ee892e810dc49758f5985b3dc4f227e01b56) )
	ROM_LOAD16_BYTE( "261d.c4", 0x1000001, 0x800000, CRC(18926df6) SHA1(a4859c9166ef7abec1f3e6af3292051a63a81f93) )
ROM_END

ROM_START( sengoku3ya ) /* Sengoku 3 - Enhance by KrysFun and Ydmis - (Can choose Byakki and Okuni - power hack)? */
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "261yka.p1", 0x100000, 0x100000, CRC(dea384f6) SHA1(2adf0f2aa1605710e37f13eb8e4588645ae7f8c2) )
	ROM_CONTINUE( 0x000000, 0x100000 )

	NEO_SFIX_MT_128K

	NEO_BIOS_AUDIO_128K( "261d.m1", CRC(36ed9cdd) SHA1(78a7d755e9e9f52255ac6228d9d402fd6a02c126) )

	ROM_REGION( 0x0e00000, "ymsnd", 0 )
	ROM_LOAD( "261.v1", 0x000000, 0x400000, CRC(64c30081) SHA1(f9ebd20cf59b72e864b7274c1bdb6d99ecaf4595) )
	ROM_LOAD( "261.v2", 0x400000, 0x400000, CRC(392a9c47) SHA1(7ab90a54089236ca6c3ef1af8e566a8025d38159) )
	ROM_LOAD( "261.v3", 0x800000, 0x400000, CRC(c1a7ebe3) SHA1(1d7bb481451f5ee0457e954bb5210300182c3c9c) )
	ROM_LOAD( "261.v4", 0xc00000, 0x200000, CRC(9000d085) SHA1(11157b355ab4eb6627e9f322ed875332d3d77349) )

	ROM_REGION( 0x2000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "261.c1", 0x0000000, 0x800000, CRC(ded84d9c) SHA1(d960523b813d4fae06d716298d4e431a5c77a0c5) )
	ROM_LOAD16_BYTE( "261.c2", 0x0000001, 0x800000, CRC(b8eb4348) SHA1(619d24312549932959481fa58f43f11c048e1ca5) )
	ROM_LOAD16_BYTE( "261.c3", 0x1000000, 0x800000, CRC(84e2034a) SHA1(38ec4ae4b86933a25c9a03799b8cade4b1346401) )
	ROM_LOAD16_BYTE( "261.c4", 0x1000001, 0x800000, CRC(0b45ae53) SHA1(a19fb21408ab633aee8bbf38bf43b5e26766b355) )
ROM_END

ROM_START( sengoku3yk ) /* Sengoku 3 - Enhance by KrysFun and Ydmis - (Can choose Byakki and Okuni - power hack) */
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "261yk.p1", 0x100000, 0x100000, CRC(51bf63b9) SHA1(36aa9f86e7cd08286983f3a1139c642714fd049e) )
	ROM_CONTINUE( 0x000000, 0x100000 )

	NEO_SFIX_MT_128K

	NEO_BIOS_AUDIO_128K( "261d.m1", CRC(36ed9cdd) SHA1(78a7d755e9e9f52255ac6228d9d402fd6a02c126) )

	ROM_REGION( 0x0e00000, "ymsnd", 0 )
	ROM_LOAD( "261.v1", 0x000000, 0x400000, CRC(64c30081) SHA1(f9ebd20cf59b72e864b7274c1bdb6d99ecaf4595) )
	ROM_LOAD( "261.v2", 0x400000, 0x400000, CRC(392a9c47) SHA1(7ab90a54089236ca6c3ef1af8e566a8025d38159) )
	ROM_LOAD( "261.v3", 0x800000, 0x400000, CRC(c1a7ebe3) SHA1(1d7bb481451f5ee0457e954bb5210300182c3c9c) )
	ROM_LOAD( "261.v4", 0xc00000, 0x200000, CRC(9000d085) SHA1(11157b355ab4eb6627e9f322ed875332d3d77349) )

	ROM_REGION( 0x2000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "261.c1", 0x0000000, 0x800000, CRC(ded84d9c) SHA1(d960523b813d4fae06d716298d4e431a5c77a0c5) )
	ROM_LOAD16_BYTE( "261.c2", 0x0000001, 0x800000, CRC(b8eb4348) SHA1(619d24312549932959481fa58f43f11c048e1ca5) )
	ROM_LOAD16_BYTE( "261.c3", 0x1000000, 0x800000, CRC(84e2034a) SHA1(38ec4ae4b86933a25c9a03799b8cade4b1346401) )
	ROM_LOAD16_BYTE( "261.c4", 0x1000001, 0x800000, CRC(0b45ae53) SHA1(a19fb21408ab633aee8bbf38bf43b5e26766b355) )
ROM_END

 // Sengoku 3
HACK( 2007, sengokucd,   sengoku,  neogeo_noslot, neogeo, neogeo_state,        neogeo,    ROT0, "SNK", "Sengoku (CD conversion)", MACHINE_SUPPORTS_SAVE )
HACK( 2001, sengoku3b,   sengoku3, neogeo_noslot, neogeo, neogeo_state, sengoku3,  ROT0, "Ydmis", "Sengoku 3 (Enable hidden characters)", MACHINE_SUPPORTS_SAVE )
HACK( 2001, sengoku3c,   sengoku3, neogeo_noslot, neogeo, neogeo_state, sengoku3,  ROT0, "Unk", "Sengoku 3 (Add Char - Char color changed)", MACHINE_SUPPORTS_SAVE )
HACK( 2001, sengoku3d,   sengoku3, neogeo_noslot, neogeo, neogeo_state,       cmc42sfix, ROT0, "SNK", "Sengoku 3 (decrypted C)", MACHINE_SUPPORTS_SAVE )
HACK( 2001, sengoku3eb,  sengoku3, neogeo_noslot, neogeo, neogeo_state, sengoku3,  ROT0, "hack", "Sengoku 3 (Green version 2014-01-11)", MACHINE_SUPPORTS_SAVE )
HACK( 2001, sengoku3eh,  sengoku3, neogeo_noslot, neogeo, neogeo_state, sengoku3,  ROT0, "hack", "Sengoku 3 (Evolution Special)", MACHINE_SUPPORTS_SAVE )
HACK( 2001, sengoku3ha,  sengoku3, neogeo_noslot, neogeo, neogeo_state, sengoku3,  ROT0, "HappyAsr","Sengoku 3 (Add Char - Select USA and Brazil)", MACHINE_SUPPORTS_SAVE )
HACK( 2001, sengoku3k,   sengoku3, neogeo_noslot, neogeo, neogeo_state, sengoku3,  ROT0, "KrysoFun", "Sengoku 3 (Add Char - Pow hack set 3)", MACHINE_SUPPORTS_SAVE )
HACK( 2001, sengoku3kc,  sengoku3, neogeo_noslot, neogeo, neogeo_state, sengoku3,  ROT0, "Fighters Kim", "Sengoku 3 (Char color changed - 80%)", MACHINE_SUPPORTS_SAVE )
HACK( 2001, sengoku3p,   sengoku3, neogeo_noslot, neogeo, neogeo_state,        neogeo,    ROT0, "Krysofun", "Sengoku 3 (Super Version)", MACHINE_SUPPORTS_SAVE )
HACK( 2001, sengoku3pl,  sengoku3, neogeo_noslot, neogeo, neogeo_state,       sengo3d,   ROT0, "Player-X", "Sengoku 3 (Plus)" , MACHINE_SUPPORTS_SAVE )
HACK( 2001, sengoku3s,   sengoku3, neogeo_noslot, neogeo, neogeo_state,        neogeo,    ROT0, "Sjx", "Sengoku 3 (Evolution v1.0)", MACHINE_SUPPORTS_SAVE )
HACK( 2001, sengoku3ya,  sengoku3, neogeo_noslot, neogeo, neogeo_state, sengoku3,  ROT0, "KrysoFun and Ydmis","Sengoku 3 (Add Char - Pow hack set 2)", MACHINE_SUPPORTS_SAVE )
HACK( 2001, sengoku3yk,  sengoku3, neogeo_noslot, neogeo, neogeo_state, sengoku3,  ROT0, "KrysoFun and Ydmis","Sengoku 3 (Add Char - Pow hack set 1)", MACHINE_SUPPORTS_SAVE )


//PSmame (c) gaston90 used with permission

 /********************************************
     Proyecto Shadows Mame Build Plus
**********************************************/

 /*********
 Sengoku 3 
************/

ROM_START( sengoku3s01 )
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "261hc01-ph1.p1", 0x100000, 0x100000, CRC(448b7afe) SHA1(0eb9558928a126fc81f2c4308b172fc220dfbe56) )
	ROM_CONTINUE( 0x000000, 0x100000 )

	NEO_SFIX_MT_128K

	NEO_BIOS_AUDIO_512K( "261.m1", CRC(7d501c39) SHA1(8e6bcc428f5ac7532d9c9be7e07ad0821461a080) )

	ROM_REGION( 0x0e00000, "ymsnd", 0 )
	ROM_LOAD( "261.v1", 0x000000, 0x400000, CRC(64c30081) SHA1(f9ebd20cf59b72e864b7274c1bdb6d99ecaf4595) )
	ROM_LOAD( "261.v2", 0x400000, 0x400000, CRC(392a9c47) SHA1(7ab90a54089236ca6c3ef1af8e566a8025d38159) )
	ROM_LOAD( "261.v3", 0x800000, 0x400000, CRC(c1a7ebe3) SHA1(1d7bb481451f5ee0457e954bb5210300182c3c9c) )
	ROM_LOAD( "261.v4", 0xc00000, 0x200000, CRC(9000d085) SHA1(11157b355ab4eb6627e9f322ed875332d3d77349) )

	ROM_REGION( 0x2000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "261.c1", 0x0000000, 0x800000, CRC(ded84d9c) SHA1(d960523b813d4fae06d716298d4e431a5c77a0c5) )
	ROM_LOAD16_BYTE( "261.c2", 0x0000001, 0x800000, CRC(b8eb4348) SHA1(619d24312549932959481fa58f43f11c048e1ca5) )
	ROM_LOAD16_BYTE( "261.c3", 0x1000000, 0x800000, CRC(84e2034a) SHA1(38ec4ae4b86933a25c9a03799b8cade4b1346401) )
	ROM_LOAD16_BYTE( "261.c4", 0x1000001, 0x800000, CRC(0b45ae53) SHA1(a19fb21408ab633aee8bbf38bf43b5e26766b355) )
ROM_END

ROM_START( sengoku3s02 )
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "261hc02-ph1.p1", 0x100000, 0x100000, CRC(52f02b93) SHA1(8a92fbd67b64417d1a5289696254984c9c6f91c6) )
	ROM_CONTINUE( 0x000000, 0x100000 )

	NEO_SFIX_MT_128K

	NEO_BIOS_AUDIO_512K( "261.m1", CRC(7d501c39) SHA1(8e6bcc428f5ac7532d9c9be7e07ad0821461a080) )

	ROM_REGION( 0x0e00000, "ymsnd", 0 )
	ROM_LOAD( "261.v1", 0x000000, 0x400000, CRC(64c30081) SHA1(f9ebd20cf59b72e864b7274c1bdb6d99ecaf4595) )
	ROM_LOAD( "261.v2", 0x400000, 0x400000, CRC(392a9c47) SHA1(7ab90a54089236ca6c3ef1af8e566a8025d38159) )
	ROM_LOAD( "261.v3", 0x800000, 0x400000, CRC(c1a7ebe3) SHA1(1d7bb481451f5ee0457e954bb5210300182c3c9c) )
	ROM_LOAD( "261.v4", 0xc00000, 0x200000, CRC(9000d085) SHA1(11157b355ab4eb6627e9f322ed875332d3d77349) )

	ROM_REGION( 0x2000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "261.c1", 0x0000000, 0x800000, CRC(ded84d9c) SHA1(d960523b813d4fae06d716298d4e431a5c77a0c5) )
	ROM_LOAD16_BYTE( "261.c2", 0x0000001, 0x800000, CRC(b8eb4348) SHA1(619d24312549932959481fa58f43f11c048e1ca5) )
	ROM_LOAD16_BYTE( "261.c3", 0x1000000, 0x800000, CRC(84e2034a) SHA1(38ec4ae4b86933a25c9a03799b8cade4b1346401) )
	ROM_LOAD16_BYTE( "261.c4", 0x1000001, 0x800000, CRC(0b45ae53) SHA1(a19fb21408ab633aee8bbf38bf43b5e26766b355) )
ROM_END

ROM_START( sengoku3s03 )
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "261hc03-ph1.p1", 0x100000, 0x100000, CRC(7984de7d) SHA1(cb0d79930d24f0601a9d2e78aa6ce193d40bcf08) )
	ROM_CONTINUE( 0x000000, 0x100000 )

	NEO_SFIX_MT_128K

	NEO_BIOS_AUDIO_512K( "261.m1", CRC(7d501c39) SHA1(8e6bcc428f5ac7532d9c9be7e07ad0821461a080) )

	ROM_REGION( 0x0e00000, "ymsnd", 0 )
	ROM_LOAD( "261.v1", 0x000000, 0x400000, CRC(64c30081) SHA1(f9ebd20cf59b72e864b7274c1bdb6d99ecaf4595) )
	ROM_LOAD( "261.v2", 0x400000, 0x400000, CRC(392a9c47) SHA1(7ab90a54089236ca6c3ef1af8e566a8025d38159) )
	ROM_LOAD( "261.v3", 0x800000, 0x400000, CRC(c1a7ebe3) SHA1(1d7bb481451f5ee0457e954bb5210300182c3c9c) )
	ROM_LOAD( "261.v4", 0xc00000, 0x200000, CRC(9000d085) SHA1(11157b355ab4eb6627e9f322ed875332d3d77349) )

	ROM_REGION( 0x2000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "261.c1", 0x0000000, 0x800000, CRC(ded84d9c) SHA1(d960523b813d4fae06d716298d4e431a5c77a0c5) )
	ROM_LOAD16_BYTE( "261.c2", 0x0000001, 0x800000, CRC(b8eb4348) SHA1(619d24312549932959481fa58f43f11c048e1ca5) )
	ROM_LOAD16_BYTE( "261.c3", 0x1000000, 0x800000, CRC(84e2034a) SHA1(38ec4ae4b86933a25c9a03799b8cade4b1346401) )
	ROM_LOAD16_BYTE( "261.c4", 0x1000001, 0x800000, CRC(0b45ae53) SHA1(a19fb21408ab633aee8bbf38bf43b5e26766b355) )
ROM_END

ROM_START( sengoku3s04 )
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "261hc04-ph1.p1", 0x100000, 0x100000, CRC(e3908f13) SHA1(41346f42dee388000b0e14bc71240d822f07abd3) )
	ROM_CONTINUE( 0x000000, 0x100000 )

	NEO_SFIX_MT_128K

	NEO_BIOS_AUDIO_512K( "261.m1", CRC(7d501c39) SHA1(8e6bcc428f5ac7532d9c9be7e07ad0821461a080) )

	ROM_REGION( 0x0e00000, "ymsnd", 0 )
	ROM_LOAD( "261.v1", 0x000000, 0x400000, CRC(64c30081) SHA1(f9ebd20cf59b72e864b7274c1bdb6d99ecaf4595) )
	ROM_LOAD( "261.v2", 0x400000, 0x400000, CRC(392a9c47) SHA1(7ab90a54089236ca6c3ef1af8e566a8025d38159) )
	ROM_LOAD( "261.v3", 0x800000, 0x400000, CRC(c1a7ebe3) SHA1(1d7bb481451f5ee0457e954bb5210300182c3c9c) )
	ROM_LOAD( "261.v4", 0xc00000, 0x200000, CRC(9000d085) SHA1(11157b355ab4eb6627e9f322ed875332d3d77349) )

	ROM_REGION( 0x2000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "261.c1", 0x0000000, 0x800000, CRC(ded84d9c) SHA1(d960523b813d4fae06d716298d4e431a5c77a0c5) )
	ROM_LOAD16_BYTE( "261.c2", 0x0000001, 0x800000, CRC(b8eb4348) SHA1(619d24312549932959481fa58f43f11c048e1ca5) )
	ROM_LOAD16_BYTE( "261.c3", 0x1000000, 0x800000, CRC(84e2034a) SHA1(38ec4ae4b86933a25c9a03799b8cade4b1346401) )
	ROM_LOAD16_BYTE( "261.c4", 0x1000001, 0x800000, CRC(0b45ae53) SHA1(a19fb21408ab633aee8bbf38bf43b5e26766b355) )
ROM_END

ROM_START( sengoku3s05 )
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "261hc05-ph1.p1", 0x100000, 0x100000, CRC(1baf5deb) SHA1(3acacc6dd68a47f40b99d1bcd4f30fcb284fb3ed) )
	ROM_CONTINUE( 0x000000, 0x100000 )

	NEO_SFIX_MT_128K

	NEO_BIOS_AUDIO_512K( "261.m1", CRC(7d501c39) SHA1(8e6bcc428f5ac7532d9c9be7e07ad0821461a080) )

	ROM_REGION( 0x0e00000, "ymsnd", 0 )
	ROM_LOAD( "261.v1", 0x000000, 0x400000, CRC(64c30081) SHA1(f9ebd20cf59b72e864b7274c1bdb6d99ecaf4595) )
	ROM_LOAD( "261.v2", 0x400000, 0x400000, CRC(392a9c47) SHA1(7ab90a54089236ca6c3ef1af8e566a8025d38159) )
	ROM_LOAD( "261.v3", 0x800000, 0x400000, CRC(c1a7ebe3) SHA1(1d7bb481451f5ee0457e954bb5210300182c3c9c) )
	ROM_LOAD( "261.v4", 0xc00000, 0x200000, CRC(9000d085) SHA1(11157b355ab4eb6627e9f322ed875332d3d77349) )

	ROM_REGION( 0x2000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "261.c1", 0x0000000, 0x800000, CRC(ded84d9c) SHA1(d960523b813d4fae06d716298d4e431a5c77a0c5) )
	ROM_LOAD16_BYTE( "261.c2", 0x0000001, 0x800000, CRC(b8eb4348) SHA1(619d24312549932959481fa58f43f11c048e1ca5) )
	ROM_LOAD16_BYTE( "261.c3", 0x1000000, 0x800000, CRC(84e2034a) SHA1(38ec4ae4b86933a25c9a03799b8cade4b1346401) )
	ROM_LOAD16_BYTE( "261.c4", 0x1000001, 0x800000, CRC(0b45ae53) SHA1(a19fb21408ab633aee8bbf38bf43b5e26766b355) )
ROM_END

ROM_START( sengoku3s06 )
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "261hc06-ph1.p1", 0x100000, 0x100000, CRC(81f8abd9) SHA1(b3b10b52d51f621c768f0645c3ae4b69513063fb) )
	ROM_CONTINUE( 0x000000, 0x100000 )

	NEO_SFIX_MT_128K

	NEO_BIOS_AUDIO_512K( "261.m1", CRC(7d501c39) SHA1(8e6bcc428f5ac7532d9c9be7e07ad0821461a080) )

	ROM_REGION( 0x0e00000, "ymsnd", 0 )
	ROM_LOAD( "261.v1", 0x000000, 0x400000, CRC(64c30081) SHA1(f9ebd20cf59b72e864b7274c1bdb6d99ecaf4595) )
	ROM_LOAD( "261.v2", 0x400000, 0x400000, CRC(392a9c47) SHA1(7ab90a54089236ca6c3ef1af8e566a8025d38159) )
	ROM_LOAD( "261.v3", 0x800000, 0x400000, CRC(c1a7ebe3) SHA1(1d7bb481451f5ee0457e954bb5210300182c3c9c) )
	ROM_LOAD( "261.v4", 0xc00000, 0x200000, CRC(9000d085) SHA1(11157b355ab4eb6627e9f322ed875332d3d77349) )

	ROM_REGION( 0x2000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "261.c1", 0x0000000, 0x800000, CRC(ded84d9c) SHA1(d960523b813d4fae06d716298d4e431a5c77a0c5) )
	ROM_LOAD16_BYTE( "261.c2", 0x0000001, 0x800000, CRC(b8eb4348) SHA1(619d24312549932959481fa58f43f11c048e1ca5) )
	ROM_LOAD16_BYTE( "261.c3", 0x1000000, 0x800000, CRC(84e2034a) SHA1(38ec4ae4b86933a25c9a03799b8cade4b1346401) )
	ROM_LOAD16_BYTE( "261.c4", 0x1000001, 0x800000, CRC(0b45ae53) SHA1(a19fb21408ab633aee8bbf38bf43b5e26766b355) )
ROM_END

ROM_START( sengoku3s07 )
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "261hc07-ph1.p1", 0x100000, 0x100000, CRC(724a452d) SHA1(98abce21b8a67cb5d4d017a3f0096b75c1561206) )
	ROM_CONTINUE( 0x000000, 0x100000 )

	NEO_SFIX_MT_128K

	NEO_BIOS_AUDIO_512K( "261.m1", CRC(7d501c39) SHA1(8e6bcc428f5ac7532d9c9be7e07ad0821461a080) )

	ROM_REGION( 0x0e00000, "ymsnd", 0 )
	ROM_LOAD( "261.v1", 0x000000, 0x400000, CRC(64c30081) SHA1(f9ebd20cf59b72e864b7274c1bdb6d99ecaf4595) )
	ROM_LOAD( "261.v2", 0x400000, 0x400000, CRC(392a9c47) SHA1(7ab90a54089236ca6c3ef1af8e566a8025d38159) )
	ROM_LOAD( "261.v3", 0x800000, 0x400000, CRC(c1a7ebe3) SHA1(1d7bb481451f5ee0457e954bb5210300182c3c9c) )
	ROM_LOAD( "261.v4", 0xc00000, 0x200000, CRC(9000d085) SHA1(11157b355ab4eb6627e9f322ed875332d3d77349) )

	ROM_REGION( 0x2000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "261.c1", 0x0000000, 0x800000, CRC(ded84d9c) SHA1(d960523b813d4fae06d716298d4e431a5c77a0c5) )
	ROM_LOAD16_BYTE( "261.c2", 0x0000001, 0x800000, CRC(b8eb4348) SHA1(619d24312549932959481fa58f43f11c048e1ca5) )
	ROM_LOAD16_BYTE( "261.c3", 0x1000000, 0x800000, CRC(84e2034a) SHA1(38ec4ae4b86933a25c9a03799b8cade4b1346401) )
	ROM_LOAD16_BYTE( "261.c4", 0x1000001, 0x800000, CRC(0b45ae53) SHA1(a19fb21408ab633aee8bbf38bf43b5e26766b355) )
ROM_END

ROM_START( sengoku3s08 )
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "261hc08-ph1.p1", 0x100000, 0x100000, CRC(c321e50f) SHA1(fb35f3f1aa35b69e21f2e33579eb3e3d2073db11) )
	ROM_CONTINUE( 0x000000, 0x100000 )

	NEO_SFIX_MT_128K

	NEO_BIOS_AUDIO_512K( "261.m1", CRC(7d501c39) SHA1(8e6bcc428f5ac7532d9c9be7e07ad0821461a080) )

	ROM_REGION( 0x0e00000, "ymsnd", 0 )
	ROM_LOAD( "261.v1", 0x000000, 0x400000, CRC(64c30081) SHA1(f9ebd20cf59b72e864b7274c1bdb6d99ecaf4595) )
	ROM_LOAD( "261.v2", 0x400000, 0x400000, CRC(392a9c47) SHA1(7ab90a54089236ca6c3ef1af8e566a8025d38159) )
	ROM_LOAD( "261.v3", 0x800000, 0x400000, CRC(c1a7ebe3) SHA1(1d7bb481451f5ee0457e954bb5210300182c3c9c) )
	ROM_LOAD( "261.v4", 0xc00000, 0x200000, CRC(9000d085) SHA1(11157b355ab4eb6627e9f322ed875332d3d77349) )

	ROM_REGION( 0x2000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "261.c1", 0x0000000, 0x800000, CRC(ded84d9c) SHA1(d960523b813d4fae06d716298d4e431a5c77a0c5) )
	ROM_LOAD16_BYTE( "261.c2", 0x0000001, 0x800000, CRC(b8eb4348) SHA1(619d24312549932959481fa58f43f11c048e1ca5) )
	ROM_LOAD16_BYTE( "261.c3", 0x1000000, 0x800000, CRC(84e2034a) SHA1(38ec4ae4b86933a25c9a03799b8cade4b1346401) )
	ROM_LOAD16_BYTE( "261.c4", 0x1000001, 0x800000, CRC(0b45ae53) SHA1(a19fb21408ab633aee8bbf38bf43b5e26766b355) )
ROM_END

ROM_START( sengoku3s09 )
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "261hc09-ph1.p1", 0x100000, 0x100000, CRC(2df82062) SHA1(55048f41b1f4c5987f701a884ffd59bca7ecb3a1) )
	ROM_CONTINUE( 0x000000, 0x100000 )

	NEO_SFIX_MT_128K

	NEO_BIOS_AUDIO_512K( "261.m1", CRC(7d501c39) SHA1(8e6bcc428f5ac7532d9c9be7e07ad0821461a080) )

	ROM_REGION( 0x0e00000, "ymsnd", 0 )
	ROM_LOAD( "261.v1", 0x000000, 0x400000, CRC(64c30081) SHA1(f9ebd20cf59b72e864b7274c1bdb6d99ecaf4595) )
	ROM_LOAD( "261.v2", 0x400000, 0x400000, CRC(392a9c47) SHA1(7ab90a54089236ca6c3ef1af8e566a8025d38159) )
	ROM_LOAD( "261.v3", 0x800000, 0x400000, CRC(c1a7ebe3) SHA1(1d7bb481451f5ee0457e954bb5210300182c3c9c) )
	ROM_LOAD( "261.v4", 0xc00000, 0x200000, CRC(9000d085) SHA1(11157b355ab4eb6627e9f322ed875332d3d77349) )

	ROM_REGION( 0x2000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "261.c1", 0x0000000, 0x800000, CRC(ded84d9c) SHA1(d960523b813d4fae06d716298d4e431a5c77a0c5) )
	ROM_LOAD16_BYTE( "261.c2", 0x0000001, 0x800000, CRC(b8eb4348) SHA1(619d24312549932959481fa58f43f11c048e1ca5) )
	ROM_LOAD16_BYTE( "261.c3", 0x1000000, 0x800000, CRC(84e2034a) SHA1(38ec4ae4b86933a25c9a03799b8cade4b1346401) )
	ROM_LOAD16_BYTE( "261.c4", 0x1000001, 0x800000, CRC(0b45ae53) SHA1(a19fb21408ab633aee8bbf38bf43b5e26766b355) )
ROM_END

ROM_START( sengoku3s10 )
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "261hc10-ph1.p1", 0x100000, 0x100000, CRC(3207586a) SHA1(a5515faf9e9941133c82fe421c7235a8c69b8278) )
	ROM_CONTINUE( 0x000000, 0x100000 )

	NEO_SFIX_MT_128K

	NEO_BIOS_AUDIO_512K( "261.m1", CRC(7d501c39) SHA1(8e6bcc428f5ac7532d9c9be7e07ad0821461a080) )

	ROM_REGION( 0x0e00000, "ymsnd", 0 )
	ROM_LOAD( "261.v1", 0x000000, 0x400000, CRC(64c30081) SHA1(f9ebd20cf59b72e864b7274c1bdb6d99ecaf4595) )
	ROM_LOAD( "261.v2", 0x400000, 0x400000, CRC(392a9c47) SHA1(7ab90a54089236ca6c3ef1af8e566a8025d38159) )
	ROM_LOAD( "261.v3", 0x800000, 0x400000, CRC(c1a7ebe3) SHA1(1d7bb481451f5ee0457e954bb5210300182c3c9c) )
	ROM_LOAD( "261.v4", 0xc00000, 0x200000, CRC(9000d085) SHA1(11157b355ab4eb6627e9f322ed875332d3d77349) )

	ROM_REGION( 0x2000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "261.c1", 0x0000000, 0x800000, CRC(ded84d9c) SHA1(d960523b813d4fae06d716298d4e431a5c77a0c5) )
	ROM_LOAD16_BYTE( "261.c2", 0x0000001, 0x800000, CRC(b8eb4348) SHA1(619d24312549932959481fa58f43f11c048e1ca5) )
	ROM_LOAD16_BYTE( "261.c3", 0x1000000, 0x800000, CRC(84e2034a) SHA1(38ec4ae4b86933a25c9a03799b8cade4b1346401) )
	ROM_LOAD16_BYTE( "261.c4", 0x1000001, 0x800000, CRC(0b45ae53) SHA1(a19fb21408ab633aee8bbf38bf43b5e26766b355) )
ROM_END

ROM_START( sengoku3s11 )
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "261hc11-ph1.p1", 0x100000, 0x100000, CRC(abfda8b0) SHA1(5ab5850325418f9ba68fe701154347dc1343a294) )
	ROM_CONTINUE( 0x000000, 0x100000 )

	NEO_SFIX_MT_128K

	NEO_BIOS_AUDIO_512K( "261.m1", CRC(7d501c39) SHA1(8e6bcc428f5ac7532d9c9be7e07ad0821461a080) )

	ROM_REGION( 0x0e00000, "ymsnd", 0 )
	ROM_LOAD( "261.v1", 0x000000, 0x400000, CRC(64c30081) SHA1(f9ebd20cf59b72e864b7274c1bdb6d99ecaf4595) )
	ROM_LOAD( "261.v2", 0x400000, 0x400000, CRC(392a9c47) SHA1(7ab90a54089236ca6c3ef1af8e566a8025d38159) )
	ROM_LOAD( "261.v3", 0x800000, 0x400000, CRC(c1a7ebe3) SHA1(1d7bb481451f5ee0457e954bb5210300182c3c9c) )
	ROM_LOAD( "261.v4", 0xc00000, 0x200000, CRC(9000d085) SHA1(11157b355ab4eb6627e9f322ed875332d3d77349) )

	ROM_REGION( 0x2000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "261.c1", 0x0000000, 0x800000, CRC(ded84d9c) SHA1(d960523b813d4fae06d716298d4e431a5c77a0c5) )
	ROM_LOAD16_BYTE( "261.c2", 0x0000001, 0x800000, CRC(b8eb4348) SHA1(619d24312549932959481fa58f43f11c048e1ca5) )
	ROM_LOAD16_BYTE( "261.c3", 0x1000000, 0x800000, CRC(84e2034a) SHA1(38ec4ae4b86933a25c9a03799b8cade4b1346401) )
	ROM_LOAD16_BYTE( "261.c4", 0x1000001, 0x800000, CRC(0b45ae53) SHA1(a19fb21408ab633aee8bbf38bf43b5e26766b355) )
ROM_END

ROM_START( sengoku3s12 )
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "261hc12-ph1.p1", 0x100000, 0x100000, CRC(67fac84b) SHA1(c1ee1d2ba2d6d782d9ae4a8905f522438e29e370) )
	ROM_CONTINUE( 0x000000, 0x100000 )

	NEO_SFIX_MT_128K

	NEO_BIOS_AUDIO_512K( "261.m1", CRC(7d501c39) SHA1(8e6bcc428f5ac7532d9c9be7e07ad0821461a080) )

	ROM_REGION( 0x0e00000, "ymsnd", 0 )
	ROM_LOAD( "261.v1", 0x000000, 0x400000, CRC(64c30081) SHA1(f9ebd20cf59b72e864b7274c1bdb6d99ecaf4595) )
	ROM_LOAD( "261.v2", 0x400000, 0x400000, CRC(392a9c47) SHA1(7ab90a54089236ca6c3ef1af8e566a8025d38159) )
	ROM_LOAD( "261.v3", 0x800000, 0x400000, CRC(c1a7ebe3) SHA1(1d7bb481451f5ee0457e954bb5210300182c3c9c) )
	ROM_LOAD( "261.v4", 0xc00000, 0x200000, CRC(9000d085) SHA1(11157b355ab4eb6627e9f322ed875332d3d77349) )

	ROM_REGION( 0x2000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "261.c1", 0x0000000, 0x800000, CRC(ded84d9c) SHA1(d960523b813d4fae06d716298d4e431a5c77a0c5) )
	ROM_LOAD16_BYTE( "261.c2", 0x0000001, 0x800000, CRC(b8eb4348) SHA1(619d24312549932959481fa58f43f11c048e1ca5) )
	ROM_LOAD16_BYTE( "261.c3", 0x1000000, 0x800000, CRC(84e2034a) SHA1(38ec4ae4b86933a25c9a03799b8cade4b1346401) )
	ROM_LOAD16_BYTE( "261.c4", 0x1000001, 0x800000, CRC(0b45ae53) SHA1(a19fb21408ab633aee8bbf38bf43b5e26766b355) )
ROM_END

/*    YEAR  NAME            PARENT    MACHINE        INPUT       INIT             MONITOR COMPANY                 FULLNAME FLAGS */
 // Sengoku 3
HACK( 2001, sengoku3s01,    sengoku3, neogeo_noslot, neogeo, neogeo_state,  sengoku3, ROT0,  "KrysoFun",    "Sengoku 3 (EX Super Version V1)" , MACHINE_SUPPORTS_SAVE )
HACK( 2001, sengoku3s02,    sengoku3, neogeo_noslot, neogeo, neogeo_state,  sengoku3, ROT0,  "sjx [FCHT]",    "Sengoku 3 (Evolution V1.0a)" , MACHINE_SUPPORTS_SAVE )
HACK( 2001, sengoku3s03,    sengoku3, neogeo_noslot, neogeo, neogeo_state,  sengoku3, ROT0,  "PlayerX",    "Sengoku 3 (Green Blue V1)" , MACHINE_SUPPORTS_SAVE )
HACK( 2001, sengoku3s04,    sengoku3, neogeo_noslot, neogeo, neogeo_state,  sengoku3, ROT0,  "PlayerX",    "Sengoku 3 (Green Blue V2)" , MACHINE_SUPPORTS_SAVE )
HACK( 2001, sengoku3s05,    sengoku3, neogeo_noslot, neogeo, neogeo_state,  sengoku3, ROT0,  "HappyASR[EGCG]",    "Sengoku 3 (Unlock All Stages)" , MACHINE_SUPPORTS_SAVE )
HACK( 2001, sengoku3s06,    sengoku3, neogeo_noslot, neogeo, neogeo_state,  sengoku3, ROT0,  "Creamymami[EGCG]",    "Sengoku 3 (Lock Combo Counter And Power)" , MACHINE_SUPPORTS_SAVE )
HACK( 2001, sengoku3s07,    sengoku3, neogeo_noslot, neogeo, neogeo_state,  sengoku3, ROT0,  "Flycboy[EGCG]",    "Sengoku 3 (Color Modification V1)" , MACHINE_SUPPORTS_SAVE )
HACK( 2001, sengoku3s08,    sengoku3, neogeo_noslot, neogeo, neogeo_state,  sengoku3, ROT0,  "Kim[FGCH]",    "Sengoku 3 (Color Modification)(Enemy)" , MACHINE_SUPPORTS_SAVE )
HACK( 2017, sengoku3s09,    sengoku3, neogeo_noslot, neogeo, neogeo_state,  sengoku3, ROT0,  "Kim[FGCH]",    "Sengoku 3 (Warring States Tradition 3 Qing Version 2017-04-02)" , MACHINE_SUPPORTS_SAVE )
HACK( 2001, sengoku3s10,    sengoku3, neogeo_noslot, neogeo, neogeo_state,  sengoku3, ROT0,  "DDJ",    "Sengoku 3 (Always Have Super Move)" , MACHINE_SUPPORTS_SAVE )
HACK( 2001, sengoku3s11,    sengoku3, neogeo_noslot, neogeo, neogeo_state,  sengoku3, ROT0,  "DDJ",    "Sengoku 3 (Easy Move)" , MACHINE_SUPPORTS_SAVE )
HACK( 2001, sengoku3s12,    sengoku3, neogeo_noslot, neogeo, neogeo_state,  sengoku3, ROT0,  "kofzec",    "Sengoku 3 (Unlock Hidden Character)" , MACHINE_SUPPORTS_SAVE )
