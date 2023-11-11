Public Class Form2
    Private Sub concreto(ByVal metro As Single, ByVal espessura As Single)
        Dim result As Single
        Dim mensagem As String
        Dim converter
        converter = (metro * espessura * 1000) / 38
        If converter < 1 Then
            MsgBox("voce precisa menos doque um saco de cimento ")
        Else
            mensagem = "Voce precisa de " & Format(converter, "0.00") & "  sacos de cimentos para " & metro & " metros "
            MsgBox(mensagem)
        End If


    End Sub
    Private Sub tinta(ByVal met)
        Dim mtinta As Single
        Dim ltinta As Single
        mtinta = met * 1000
        ltinta = mtinta / 1000
        MsgBox("Voce preicsa de " & mtinta & " Ml de tinta para  " & met & vbNewLine & " e de " & ltinta & " Litros de tinta ")


    End Sub
    Private Sub massaacrilica()
        Dim rendimento As Single ' Rendimento em quilogramas por metro quadrado
        Dim m As Single ' Área em metros quadrados
        Dim quantidadetotal As Single ' Quantidade total em quilogramas

        ' Definir o rendimento (1,2 kg por metro quadrado)
        rendimento = 1.2

        ' Solicitar as dimensões da área ao usuário (largura e comprimento)
        Dim l As Single ' Largura
        Dim a As Single ' Comprimento
        Dim e As Single
        Dim converter As Single

        l = CDbl(InputBox("Digite a largura em metros:"))
        a = CDbl(InputBox("Digite o comprimento em metros:"))
        Dim cultura As System.Globalization.CultureInfo = New System.Globalization.CultureInfo("en-US")

        converter = e / 100
        ' Calcular a área em metros quadrados
        m = a * l

        ' Calcular a quantidade total em quilogramas
        quantidadetotal = m / 2.8


        MsgBox("Você precisará de " & quantidadetotal.ToString("0.00", cultura) & " kg do material para cobrir " & m & " metros quadrados.")







    End Sub

    Private Sub Form2_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load

    End Sub



    Private Sub btncalcular_Click_1(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btncalcular.Click
        Dim selecao As Integer
        Dim metross As Single
        Dim altura, largura As Single

        Dim esp As Single
        selecao = txtselecionar.Text
        If selecao = 1 Then
            metross = InputBox(" Digite os metros aqui para saber a quantidade de tinta ")
            tinta(metross)
        Else
            If selecao = 2 Then
                metross = InputBox("digite os metros aqui para saber a quantidade de sacos de cimentos ")
                esp = InputBox("digite a espessura aqui para saber a quantidade de cimentos ")
                concreto(metross, esp)
            Else
                If selecao = 3 Then
                    massaacrilica()


                End If


            End If
        End If
    End Sub
End Class