Public Class LOGIN

    Private Sub Button1_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnsenha.Click
        Dim us As String
        Dim sh As String
        Dim result As Boolean
        us = txtusuario.Text
        sh = txtsenha.Text
        If us = "thiago" And sh = "thiago123" Then
            result = True
            Form2.Show()

        Else
            result = False
            MsgBox(" senha ou usuario invalido ")
           
        End If


    End Sub
End Class
