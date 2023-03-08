using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FeedbackPanel : MonoBehaviour
{
    [SerializeField]
    Button btnSubmit, btCancel;
    [SerializeField]
    CanvasGroup feedbackForm;

    void Start()
    {
        btnSubmit.onClick.AddListener(delegate { SubmitForm(); });
        btCancel.onClick.AddListener(delegate { CancelForm(); });
    }

    public void SubmitForm()
    {
        CloseForm();
    }
    public void CancelForm()
    {
        CloseForm();
    }
    private void CloseForm()
    {
        feedbackForm.alpha = 0;
        feedbackForm.interactable = false;
        feedbackForm.blocksRaycasts = false;
    }
}
