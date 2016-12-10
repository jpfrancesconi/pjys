-- ACCESS = access content
SELECT ws.sid AS SID,
	wsd1.data AS CODIGO_CANASTA,
	wsd5.data AS CANASTA,
	wsd2.data AS CANTIDAD,
	wsd16.data AS MONTO_A_PAGAR,
	CASE wsd9.data  WHEN 0 then 'RESERVADO' ELSE wsd9.data END as ESTADO,
	wsd3.data AS USUARIO,
	wsd11.data AS NOMBRE,
	wsd12.data AS DNI,
	CASE wsd17.data  WHEN 0 then 'NO' ELSE 'SI' END as ENTREGADO

FROM `webform_submissions` ws
	JOIN webform_submitted_data wsd1 ON wsd1.sid = ws.sid
	JOIN webform_submitted_data wsd2 ON wsd2.sid = wsd1.sid
	JOIN webform_submitted_data wsd3 ON wsd3.sid = wsd1.sid
	JOIN webform_submitted_data wsd9 ON wsd9.sid = wsd1.sid
	JOIN webform_submitted_data wsd5 ON wsd5.sid = wsd1.sid
	JOIN webform_submitted_data wsd11 ON wsd11.sid = wsd1.sid
	JOIN webform_submitted_data wsd12 ON wsd12.sid = wsd1.sid
	JOIN webform_submitted_data wsd16 ON wsd16.sid = wsd1.sid
	JOIN webform_submitted_data wsd17 ON wsd17.sid = wsd1.sid
WHERE ws.nid = 12
	AND wsd1.cid = 1
	AND wsd2.cid = 14
	AND wsd3.cid = 3
	AND wsd9.cid = 9
	AND wsd5.cid = 5
	AND wsd11.cid = 11
	AND wsd12.cid = 12
	AND wsd16.cid = 16
	AND wsd17.cid = 17
--SWITCH=:sino
--CASE=NO
AND wsd17.data = 0
--CASE=SI
AND wsd17.data = 1
--CASE=TODOS
AND 1=1
--END
--IF=:apellido
	AND wsd11.data like CONCAT('%',:apellido,'%')
--END