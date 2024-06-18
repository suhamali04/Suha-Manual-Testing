Action()
{

	web_url("gts1c3.der", 
		"URL=http://pki.goog/repo/certs/gts1c3.der", 
		"Resource=1", 
		"RecContentType=application/pkix-cert", 
		"Referer=", 
		"Snapshot=t1.inf", 
		LAST);

	web_url("gts1c3.der_2", 
		"URL=http://pki.goog/repo/certs/gts1c3.der", 
		"Resource=1", 
		"Referer=", 
		"Snapshot=t2.inf", 
		LAST);

	web_url("gtsr1.der", 
		"URL=http://pki.goog/repo/certs/gtsr1.der", 
		"Resource=1", 
		"RecContentType=application/pkix-cert", 
		"Referer=", 
		"Snapshot=t3.inf", 
		LAST);

	web_url("gtsr1.der_2", 
		"URL=http://pki.goog/repo/certs/gtsr1.der", 
		"Resource=1", 
		"Referer=", 
		"Snapshot=t4.inf", 
		LAST);

	web_url("gts1c3.der_3", 
		"URL=http://pki.goog/repo/certs/gts1c3.der", 
		"Resource=1", 
		"RecContentType=application/pkix-cert", 
		"Referer=", 
		"Snapshot=t5.inf", 
		LAST);

	web_url("gtsr1.der_3", 
		"URL=http://pki.goog/repo/certs/gtsr1.der", 
		"Resource=1", 
		"RecContentType=application/pkix-cert", 
		"Referer=", 
		"Snapshot=t6.inf", 
		LAST);

	web_url("gts1c3.der_4", 
		"URL=http://pki.goog/repo/certs/gts1c3.der", 
		"Resource=1", 
		"RecContentType=application/pkix-cert", 
		"Referer=", 
		"Snapshot=t7.inf", 
		LAST);

	web_url("gtsr1.der_4", 
		"URL=http://pki.goog/repo/certs/gtsr1.der", 
		"Resource=1", 
		"RecContentType=application/pkix-cert", 
		"Referer=", 
		"Snapshot=t8.inf", 
		LAST);

	lr_think_time(51);

	web_url("gts1c3.der_5", 
		"URL=http://pki.goog/repo/certs/gts1c3.der", 
		"Resource=1", 
		"RecContentType=application/pkix-cert", 
		"Referer=", 
		"Snapshot=t9.inf", 
		LAST);

	web_url("gtsr1.der_5", 
		"URL=http://pki.goog/repo/certs/gtsr1.der", 
		"Resource=1", 
		"RecContentType=application/pkix-cert", 
		"Referer=", 
		"Snapshot=t10.inf", 
		LAST);

	web_url("gts1c3.der_6", 
		"URL=http://pki.goog/repo/certs/gts1c3.der", 
		"Resource=1", 
		"RecContentType=application/pkix-cert", 
		"Referer=", 
		"Snapshot=t11.inf", 
		LAST);

	web_url("gtsr1.der_6", 
		"URL=http://pki.goog/repo/certs/gtsr1.der", 
		"Resource=1", 
		"RecContentType=application/pkix-cert", 
		"Referer=", 
		"Snapshot=t12.inf", 
		LAST);

	web_url("gts1c3.der_7", 
		"URL=http://pki.goog/repo/certs/gts1c3.der", 
		"Resource=1", 
		"RecContentType=application/pkix-cert", 
		"Referer=", 
		"Snapshot=t13.inf", 
		LAST);

	web_url("gtsr1.der_7", 
		"URL=http://pki.goog/repo/certs/gtsr1.der", 
		"Resource=1", 
		"RecContentType=application/pkix-cert", 
		"Referer=", 
		"Snapshot=t14.inf", 
		LAST);

	web_url("gts1c3.der_8", 
		"URL=http://pki.goog/repo/certs/gts1c3.der", 
		"Resource=1", 
		"RecContentType=application/pkix-cert", 
		"Referer=", 
		"Snapshot=t15.inf", 
		LAST);

	web_url("gtsr1.der_8", 
		"URL=http://pki.goog/repo/certs/gtsr1.der", 
		"Resource=1", 
		"RecContentType=application/pkix-cert", 
		"Referer=", 
		"Snapshot=t16.inf", 
		LAST);

	web_custom_request("json", 
		"URL=http://update.googleapis.com/service/update2/json?cup2key=14:G4l1bAOZE-y5GOneNIoG7oM-0H0OmGxu6rPCRRCViz4&cup2hreq=a677afed8f5abffc3bb3e8ad04db7a909f6bdf4fad125f568d2a75d09608aae1", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"ONGR\",\"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6314,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.aa49d75ed62e3cbfb005c686b6009b9f12b1eee7558a52588bcaaaf70177698d\"}]},\"ping\":{\"ping_freshness\":\"{b9099030-2a5c-492f-a670-4501cdb3cc09}\",\"rd\":6377},\"updatecheck\":{},\""
		"version\":\"2024.6.17.0\"},{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"ONGR\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6314,\"lang\":\"en-US\",\"ping\":{\"ping_freshness\":\"{9246aadf-f675-4c2e-a477-06754d0ff442}\",\"rd\":6377},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"ONGR\",\"cohort\":\"1:1299:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6314,\"lang\":\"en-US\",\"packages\":{\"package\":[{\""
		"fp\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{fc5bfc2b-b9d2-436a-9817-026ec6ba5803}\",\"rd\":6377},\"updatecheck\":{},\"version\":\"1.0.2738.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"ONGR\",\"cohort\":\"1:1zdx:\",\"cohortname\":\"4.10.2710.0 to Windows (x86/x64)\",\"enabled\":true,\"installdate\":6314,\"lang\":\"en-US\",\"ping\":{\"ping_freshness\":\"{c6403067-d51a-4c3b-9741-7a82de0ab192}\",\"rd\":6377},\""
		"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"ONGR\",\"cohort\":\"1:bm1:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":6314,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\"ping_freshness\":\"{529d7c04-56c6-4898-a851-d8f34a45593c}\",\"rd\":6377},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"accept_locale\":\"ENUS500000\",\"appid\":\""
		"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"ONGR\",\"cohort\":\"1:s6f:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6314,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.3db671c10b19ce621685bdd52e80b78249168366bce250836f34a123a8b503fe\"}]},\"ping\":{\"ping_freshness\":\"{8a7e9dfd-5c52-4276-b45e-ad3f72fbe0b3}\",\"rd\":6377},\"updatecheck\":{},\"version\":\"20240429.634529504.14\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"ONGR\",\"cohort\":\"1:lwl"
		":2gcf@0.025\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6314,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.8a609cc96a7aa83f1f3cf3d188c04fed2364af58d0a92a6925a6c43ae593c528\"}]},\"ping\":{\"ping_freshness\":\"{022a2611-1aaa-4dc7-893b-22862b9ac07d}\",\"rd\":6377},\"updatecheck\":{},\"version\":\"452\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"ONGR\",\"cohort\":\"1:v3l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6314,\"lang\":\"en-US\",\""
		"packages\":{\"package\":[{\"fp\":\"1.770066770634a32e9928dbad07833fa29a7cb82839fea145e802a798b8c20cb6\"}]},\"ping\":{\"ping_freshness\":\"{6ca9f169-7059-4303-ac54-ba1057fa5ff7}\",\"rd\":6377},\"updatecheck\":{},\"version\":\"2024.6.12.1\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"ONGR\",\"cohort\":\"1:j5l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6314,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.3eb16d6c28b502ac4cfee8f4a148df05f4d93229fa36a71db8b08d06329ff18a\"}]},\"ping\":{\"ping_freshness\":\"{c14d2c19-7c29-4f90-b241-3f13dc6e591b}\",\"rd\":6377},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"ONGR\",\"cohort\":\"1:cux:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6314,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.8aed26106d9b12205a9cc12ca05a8e0c347d405a5db4b77f28b3324ead0bbae4\"}]},\"ping\":{\"ping_freshness\""
		":\"{b4162508-b1b0-4cca-9d79-1c3a82d7de68}\",\"rd\":6377},\"updatecheck\":{},\"version\":\"66\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"ONGR\",\"cohort\":\"1:287f:\",\"cohortname\":\"Auto full\",\"enabled\":true,\"installdate\":6314,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.cd5469026f929e8c758c3b849e1de24ed0e5db1f48783b0d2c81427c729f372d\"}]},\"ping\":{\"ping_freshness\":\"{114aaa06-5dd9-4310-88e8-aa5059f5ddf1}\",\"rd\":6377},\"updatecheck\":{},\"version\":\""
		"8856\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"ONGR\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6314,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.3a118962ef814c91f6476bb9f0de58afa63103af6ac1b8729be9b39a86789e96\"}]},\"ping\":{\"ping_freshness\":\"{2c06c3f2-22ed-430f-9254-2d7f87c3121b}\",\"rd\":6377},\"updatecheck\":{},\"version\":\"1.0.0.15\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"ONGR\",\"cohort\":\"1:10zr:\",\"cohortname\":\"Auto"
		"\",\"enabled\":true,\"installdate\":6314,\"lang\":\"en-US\",\"ping\":{\"ping_freshness\":\"{a7fc3f41-c529-46d0-b47c-159a4cf7858b}\",\"rd\":6377},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"ONGR\",\"cohort\":\"1:ofl:\",\"cohortname\":\"stable64\",\"enabled\":true,\"installdate\":6314,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\""
		"ping_freshness\":\"{93b1277c-2333-4f85-9119-a0a0560da37a}\",\"rd\":6377},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"ONGR\",\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":6314,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.ad1d2aaa05740830067bf2e7fb89d5185a9ee417816c300585052187e7de39cb\"}]},\"ping\":{\"ping_freshness\":\"{989eca32-f8bc-4199-913d-17297791ca7c}\",\"rd\":6377},\""
		"updatecheck\":{},\"version\":\"985\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"ONGR\",\"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6314,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.2e871143703b862fcdf558b45cfe02a93a2cb74518b30f4c1e0f07753b0823b8\"}]},\"ping\":{\"ping_freshness\":\"{01ea3e39-4b22-4ba9-b374-f50a5c55c531}\",\"rd\":6377},\"updatecheck\":{},\"version\":\"3033\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":"
		"\"ONGR\",\"cohort\":\"1:ut9/1a0f:2c99@0.1\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"installdate\":6314,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.905f83845e25579fd4c6ae4bdc81a2740a216023f856918045ced4508329c941\"}]},\"ping\":{\"ping_freshness\":\"{f1d5334e-4d5f-4dc1-b7ab-c8f721b4bc2d}\",\"rd\":6377},\"updatecheck\":{},\"version\":\"2023.11.29.1201\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"ONGR\",\"cohort\":\"1:wvr:\",\"cohortname\":\"Auto\",\""
		"enabled\":true,\"installdate\":6314,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\"ping\":{\"ping_freshness\":\"{b66e50f5-6fc0-435c-ab24-64fce8baa7e6}\",\"rd\":6377},\"updatecheck\":{},\"version\":\"120.0.6050.0\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"ONGR\",\"cohort\":\"1:w0x:\",\"cohortname\":\"All users\",\"enabled\":true,\"installdate\":6314,\"lang\":\"en-US\",\"packages\":{\"package\":[{"
		"\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{881ed0dd-9612-4917-b406-c67d4c9d6b2f}\",\"rd\":6377},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\"ONGR\",\"cohort\":\"1:26yf:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":6314,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.6309989940fdeb196a5a2942c0ad0ee3fc64b256a86e60cad8d226374c37e178\"}]},\"ping\":{\""
		"ping_freshness\":\"{44a2730e-acf1-45bf-b679-f534c0e1605c}\",\"rd\":6377},\"updatecheck\":{},\"version\":\"2024.6.16.1\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"ONGR\",\"cohort\":\"1:w59:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6314,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.26c197ab0b2bd999fd5c8b5932e5700a083febf68e6d35f56b2473d6858a02cd\"}]},\"ping\":{\"ping_freshness\":\"{9b6db1cd-f4a5-4a6b-9629-93e81eb58612}\",\"rd\":6377},\"updatecheck\":{"
		"},\"version\":\"2024.6.5.140657\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"ONGR\",\"cohort\":\"1:z1x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6314,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.24b224da50148fc830da997f872f0345100c290d1f5d5b8ff1ce967f53bcf8cf\"}]},\"ping\":{\"ping_freshness\":\"{67edcf5d-40ae-43b7-9a63-b549cade2539}\",\"rd\":6377},\"updatecheck\":{},\"version\":\"2024.6.12.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\""
		":false,\"hw\":{\"avx\":true,\"physmemory\":12,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19045.4412\"},\"prodversion\":\"126.0.6478.61\",\"protocol\":\"3.1\",\"requestid\":\"{7f305b7f-4a14-4695-a01e-729b4ac6a054}\",\"sessionid\":\"{b669b5b4-be25-4d78-89dd-a54ab8ba08bb}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\""
		"lastchecked\":0,\"laststarted\":0,\"name\":\"ChromiumUpdater\",\"updatepolicy\":-1,\"version\":\"128.0.6537.0\"},\"updaterversion\":\"126.0.6478.61\"}}", 
		EXTRARES, 
		"Url=http://pki.goog/repo/certs/gts1c3.der", "Referer=", ENDITEM, 
		"Url=http://pki.goog/repo/certs/gtsr1.der", "Referer=", ENDITEM, 
		LAST);

	return 0;
}